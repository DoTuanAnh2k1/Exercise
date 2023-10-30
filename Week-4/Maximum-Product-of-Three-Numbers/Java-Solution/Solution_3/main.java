public class main {
    public static void main(String[] args) {
        maximumProduct(new int[]{1, 2, 3});
        maximumProduct(new int[]{1, 2, 3, 4});
        maximumProduct(new int[]{-1, -2, -3});
        maximumProduct(new int[]{-1, -2, -3, 0, 1, 2});
    }

    public static void maximumProduct(int[] arr) {
        int[] largest = findThreeLargestNumbers(arr);
        int[] smallest = findTwoSmallestNumbers(arr);

        int max1 = largest[0];
        int max2 = largest[1];
        int max3 = largest[2];

        int min1 = smallest[0];
        int min2 = smallest[1];

        int result = max(max1 * max2 * max3, max3 * min1 * min2);
        System.out.println(result);
    }

    public static int[] findThreeLargestNumbers(int[] arr) {
        int[] largest = {Integer.MIN_VALUE, Integer.MIN_VALUE, Integer.MIN_VALUE};

        for (int num : arr) {
            if (num > largest[2]) {
                largest[0] = largest[1];
                largest[1] = largest[2];
                largest[2] = num;
            } else if (num > largest[1]) {
                largest[0] = largest[1];
                largest[1] = num;
            } else if (num > largest[0]) {
                largest[0] = num;
            }
        }

        return largest;
    }

    public static int[] findTwoSmallestNumbers(int[] arr) {
        int firstSmallest = Integer.MAX_VALUE;
        int secondSmallest = Integer.MAX_VALUE;

        for (int num : arr) {
            if (num < firstSmallest) {
                secondSmallest = firstSmallest;
                firstSmallest = num;
            } else if (num < secondSmallest && num != firstSmallest) {
                secondSmallest = num;
            }
        }

        if (secondSmallest == Integer.MAX_VALUE) {
            secondSmallest = -1;
        }

        int[] smallest = {firstSmallest, secondSmallest};
        return smallest;
    }

    public static int max(int a, int b) {
        return a > b ? a : b;
    }
}
