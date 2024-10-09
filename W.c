#include <stdio.h>

int main() {
    int T, N, b;
    
    scanf("%d", &T);

    while(T--){
        scanf("%d", &N);
    
    int evenCount = 0, oddCount = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &b);

            if (b % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        printf("Odd group : %d integer(s).\n", oddCount);
        printf("Even group : %d integer(s).\n", evenCount);
    }

    

    return 0;
}
