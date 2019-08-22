#include <stdio.h>

void recurse(int n) {
    if (n > 0) {
        printf("%p: %d\n", &n, n);
        recurse(n-1);
    }
}

void recurse2(int n) {
    if (n > 0) {
        recurse2(n-1);
        printf("%p: %d\n", &n, n);
    }
}

// Number of calls: n+1
// Or O(n) or "order of" or "degree of n"

int main() {
    int n = 4;
    printf("starting n address: %p: %d", &n, n);
    printf("\n\n");
    recurse(n);
    printf("\nstarting 'recurse1' now\n\n");
    recurse2(n);
    printf("\n\n");
    printf("ending n address: %p: %d", &n, n);
    return 0;
}