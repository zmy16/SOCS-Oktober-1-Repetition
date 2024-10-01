#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);  
    
    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);
        
        printf("Case %d: ", t);
        for (int i = 0; i < N; i++) {
            int slices = (i * (i + 1)) / 2 + 1;
            printf("%d", slices);
            if (i < N - 1) {
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}
