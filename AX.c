#include <stdio.h>

int main() {
    long long N;  // Ganti tipe data menjadi long long
    scanf("%lld", &N);
    
    long long A[N];  // Ganti tipe data array menjadi long long
    for (long long i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    
    long long max_profit = 0;  // Ganti tipe data menjadi long long
    
    for (long long i = 0; i < N; i++) {
        if (A[i] > 0) {
            max_profit += A[i];
        }
    }
    
    printf("%lld\n", max_profit);  // Ganti format output menjadi %lld
    return 0;
}
