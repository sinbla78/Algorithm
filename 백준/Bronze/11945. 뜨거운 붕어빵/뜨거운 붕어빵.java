import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();

		for (int i = 0; i < x; i++) {
			while (sc.hasNext()) {
				StringBuilder sb = new StringBuilder(sc.next());
				System.out.println(sb.reverse());
			}
		}
		sc.close();
	}

}