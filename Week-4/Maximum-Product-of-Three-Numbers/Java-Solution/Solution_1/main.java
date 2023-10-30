public class main {
    public static int max(int a, int b) {
        return a > b ? a : b;
    }

    public static void maximumProduct(int[] arr) {
        int maxProduct = Integer.MIN_VALUE;
        int n = arr.length;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    maxProduct = max(maxProduct, arr[i] * arr[j] * arr[k]);
                }
            }
        }

        System.out.println(maxProduct);
    }

    public static void main(String[] args) {
        maximumProduct(new int[]{1, 2, 3});
        maximumProduct(new int[]{1, 2, 3, 4});
        maximumProduct(new int[]{-1, -2, -3});
        maximumProduct(new int[]{-1, -2, -3, 0, 1, 2});
    }
}
