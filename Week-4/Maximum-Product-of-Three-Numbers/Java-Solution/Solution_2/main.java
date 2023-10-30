import java.util.Arrays;

public class main {
    public static int max(int a, int b) {
        return a > b ? a : b;
    }

    public static void maximumProduct(int[] arr) {
        Arrays.sort(arr);
        int n = arr.length;
        System.out.println(max(arr[n - 1] * arr[n - 2] * arr[n - 3], arr[0] * arr[1] * arr[n - 1]));
    }

    public static void main(String[] args) {
        maximumProduct(new int[]{1, 2, 3});
        maximumProduct(new int[]{1, 2, 3, 4});
        maximumProduct(new int[]{-1, -2, -3});
        maximumProduct(new int[]{-1, -2, -3, 0, 1, 2});
    }
}
