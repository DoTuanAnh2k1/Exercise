#include <stdio.h>

void differenceOfSums(int n, int m) {
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i <= n; i ++) {
        if (i % m == 0) {
            sum1 = sum1 + i;
        } else {
            sum2 = sum2 + i;
        }
    }
    printf("%d - %d = %d \n", sum2, sum1, sum2 - sum1);
}
// Nguyen Phuong Linh
int main() {
    differenceOfSums(10, 3);
    differenceOfSums(5, 6);
    return 0;
}