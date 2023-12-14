import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        // x번 반복하면서 문자열을 입력받아 뒤집어 출력합니다.
        for (int i = 0; i < x; i++) {
            while (sc.hasNext()) {
                StringBuilder sb = new StringBuilder(sc.next());
                System.out.println(sb.reverse());
            }
        }

        // Scanner 객체를 닫아줍니다.
        sc.close();
    }
}
