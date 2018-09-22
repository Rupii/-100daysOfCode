import java.util.*;

class MaxSumSub {
    public static void main(String[] args) {
        int arr[] = { -1, 3, 4, -2, 5 };
        int sum = 0, best = 0;
        for (int i : arr) {
            sum = Math.max(i, sum + i);
            best = Math.max(best, sum);

        }
        System.out.println(best);
    }
}