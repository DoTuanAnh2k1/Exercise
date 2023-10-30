#include <stdio.h>

void isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("No\n");
            return;
        }
    }
    printf("Yes\n");
}
/*
    Hang
*/
int main() {
    for (int i = 1; i < 100; i++) {
        isPrime(i);
    }
    return 0;
}