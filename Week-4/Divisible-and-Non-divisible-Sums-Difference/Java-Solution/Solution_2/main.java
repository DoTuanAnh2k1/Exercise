public class main {
    public static void differenceOfSums(int n, int m) {
        int sumN = n * (n + 1) / 2;
        n -= n % m;
        int numberOfDivisibleM = (n - m) / m + 1;
        int sum1 = numberOfDivisibleM * m + (numberOfDivisibleM * (numberOfDivisibleM - 1) * m) / 2;

        System.out.println(sumN - 2 * sum1);
    }

    public static void main(String[] args) {
        differenceOfSums(10, 3);
        differenceOfSums(5, 6);
    }
}
