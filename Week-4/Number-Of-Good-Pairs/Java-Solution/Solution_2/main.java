public class main {
    public static void main(String[] args) {
        int[] arr1 = {1, 2, 3, 1, 1, 3};
        numberOfGoodPairs(arr1);

        int[] arr2 = {1, 1, 1, 1};
        numberOfGoodPairs(arr2);

        int[] arr3 = {1, 2, 3};
        numberOfGoodPairs(arr3);
    }

    public static void numberOfGoodPairs(int arr[]) {
        int n = arr.length;
        int[] frequency = new int[n];
        for (int i = 0; i < n; i++) {
            frequency[i] = 0;
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (frequency[arr[i]] == 0) {
                frequency[arr[i]]++;
                continue;
            }
            if (frequency[arr[i]] != 0) {
                count = count + frequency[arr[i]];
                frequency[arr[i]]++;
            }
        }
        System.out.println(count);
    }
}
