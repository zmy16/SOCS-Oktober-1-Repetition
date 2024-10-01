#include <stdio.h>

int main() {
    int N, i, currentPosition = 0;
    int diceRoll;


    int ladder[3][2] = {{9, 21}, {33, 42}, {76, 92}};
    int snake[3][2] = {{53, 37}, {80, 59}, {97, 88}};
    

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &diceRoll);
        

        currentPosition += diceRoll;


        for (int j = 0; j < 3; j++) {
            if (currentPosition == ladder[j][0]) {
                currentPosition = ladder[j][1];
                break;
            }
        }

        for (int j = 0; j < 3; j++) {
            if (currentPosition == snake[j][0]) {
                currentPosition = snake[j][1];
                break;
            }
        }

        if (currentPosition > 30000) {
            currentPosition = 30000;
            break;
        }
    }

    // Output posisi akhir
    printf("%d\n", currentPosition);

    return 0;
}

