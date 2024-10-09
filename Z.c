#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int posisi = 0; 

    for (int i = 0; i < N; i++) {
        int ki; // Jumlah lemparan dadu 
        scanf("%d", &ki);

        posisi += ki;

        // Jika posisi melebihi atau sama dengan 40, kembali ke awal
        if (posisi >= 40) {
            posisi -= 40;
        }

        if (posisi == 30) {
            posisi = 10; 
        } else if (posisi == 12) {
            posisi = 28; 
        } else if (posisi == 35) {
            posisi = 7; 
        }
    }

    printf("%d\n", posisi);

    return 0;
}
