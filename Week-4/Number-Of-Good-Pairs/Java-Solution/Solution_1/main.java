public class main {
    public static void main(String[] args) {
        numberOfGoodPairs(new int[]{1, 2, 3, 1, 1, 3});
        numberOfGoodPairs(new int[]{1, 1, 1, 1});
        numberOfGoodPairs(new int[]{1, 2, 3});
    }

    public static void numberOfGoodPairs(int[] arr) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
