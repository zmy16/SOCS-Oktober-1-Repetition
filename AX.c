#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int max_profit = 0;
    
    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            max_profit += A[i];
        }
    }
    
    printf("%d\n", max_profit);
    return 0;
}
