```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();

        for(int i = A+1; i < B+2; i++){
            System.out.printf("%d ", i);
        }

        in.close();
    }
}
```