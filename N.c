#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T);
    
    for (int case_num = 1; case_num <= T; case_num++) {
        scanf("%d %d", &A, &B);
        
        int total = A;
        int empty = A;
        
        while (empty >= B) {
            int new_bottles = empty / B;
            total += new_bottles;
            empty = new_bottles + (empty % B);
        }
        
        printf("Case #%d: %d\n", case_num, total);
    }
    
    return 0;
}
