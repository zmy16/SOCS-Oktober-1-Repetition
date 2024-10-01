#include <stdio.h>
#define Pi 3.14

int main() {
    int T;
    scanf("%d", &T);

    double area[T];
    int R, H;

    for(int i = 0; i < T; i++){
        scanf("%d %d", &R, &H);

        // Menghitung luas permukaan dan menyimpannya dalam array
        area[i] = 2 * Pi * R * (R + H);
    }

    // Loop untuk mencetak semua hasil di akhir
    for(int i = 0; i < T; i++){
        // Output sesuai dengan format yang diminta
        printf("Case #%d: %.2f\n", i+1, area[i]);
    }

    return 0;
}
