#include <stdio.h>

int main() {
    int N, M;
    int a, b;
    int bMax = 0, weapon = 0;

    scanf("%d %d", &N, &M);

    int weapons[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &weapons[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &b);
        if (b > bMax) {
            bMax = b;
        }
    }

    for (int i = 0; i < N; i++) {
        if (weapons[i] > bMax) {
            weapon = 1;
            break;
        }
    }

    if (weapon) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }

    return 0;
}
