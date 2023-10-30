public class main {
    public static void averageValue(int[] arr) {
        int sum = 0;
        int count = 0;
        for (int v : arr) {
            if (v % 6 == 0) {
                sum = sum + v;
                count++;
            }
        }

        if (count == 0) {
            System.out.println("0");
        } else {
            System.out.println((float) sum / count);
        }
    }

    public static void main(String[] args) {
        averageValue(new int[]{1, 3, 6, 10, 12, 15});
        averageValue(new int[]{1, 2, 4, 7, 10});
    }
}
