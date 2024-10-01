import java.util.Arrays;
import java.util.Scanner;

public class Main1 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int N = in.nextInt();
        int[] arr = new int[N];

        for(int i = 0; i < N; i++) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr); //정렬

        int M = in.nextInt();

        StringBuilder sb = new StringBuilder();

        for(int i = 0; i < M; i++) {
            int key = in.nextInt();
            
            sb.append(upperBound(arr, key) - lowerBound(arr, key)).append(' ');
        }
        System.out.println(sb);
    }


    private static int lowerBound(int[] arr, int key) {
        int lo = 0;
        int hi = arr.length;

        while (lo < hi) {

            int mid = (lo + hi) / 2;
            
            if (key <= arr[mid]) {
                hi = mid;
            }

            else {
                lo = mid + 1;
            }
        }

        return lo;
    } 

    private static int upperBound(int[] arr, int key) {
        int lo = 0;
        int hi = arr.length;

        while (lo < hi) {

            int mid = (lo + hi) / 2; 

=            if (key < arr[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }

        return lo;
    }

}//이분탐색
