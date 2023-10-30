#include <stdio.h>

void differenceOfSums(int n, int m) {
    int sum = n * (n + 1) / 2; 
    n = n - n % m;
    int numberOfDivisibleM = (n - m) / m + 1;
    int sum1 = numberOfDivisibleM * m + numberOfDivisibleM * (numberOfDivisibleM - 1) * m / 2;

    printf("%d \n", sum - 2 * sum1);
}
// Nguyen Phuong Linh
int main() {
    differenceOfSums(10, 3);
    differenceOfSums(5, 6);
    return 0;
}