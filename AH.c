#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char number[1001];
    int results[100];
    
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%s", number);
        results[i] = strlen(number);
    }

    for (int i = 0; i < T; i++) {
        printf("Case #%d: %d\n", i + 1, results[i]);
    }

    return 0;
}

