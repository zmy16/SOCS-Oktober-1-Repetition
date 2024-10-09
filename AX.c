#include <stdio.h>

int main() {
    long long N;  
    scanf("%lld", &N);
    
    long long A[N];  
    for (long long i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    
    long long max_profit = 0;  
    
    for (long long i = 0; i < N; i++) {
        if (A[i] > 0) {
            max_profit += A[i];
        }
    }
    
    printf("%lld\n", max_profit); 
}
