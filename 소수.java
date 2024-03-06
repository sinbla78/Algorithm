```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int[] arr = new int[n + 1];
        int cnt = 0;

        for (int i = 2; i <= n; i++) {
            if (arr[i] == 0) {
                cnt += 1;
                for (int j = i; j <= n; j += i) {
                    arr[j] = 1;
                }
            }
        }

        System.out.println(cnt);

        scanner.close();
    }
}
```