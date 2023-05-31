import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// 첫째 줄에 N, K가 공백으로 주어지므로 N,K에 sc.nextInt()로 담아준다.
		int N = sc.nextInt(), K = sc.nextInt();
		// 둘째 줄 부터 N개 종류의 동전들이 주어진다. 따라서 동전의 종류를 담을 N칸 배열을 선언한다. 
		int []coin = new int[N];
		// 총 몇개의 동전이 필요한지 체크할 변수
		int count = 0;
		
		// coin[]의 0~N-1방에 동전의 값을 넣어 준다.  
		for (int i = 0; i < N; i++) {
			coin[i] = sc.nextInt();
		}
		
		// 최소한의 동전 개수를 찾아야 하므로 동전가치가 가장 큰 N-1번방부터 coin[i]를 찾는다.
		for (int i = N-1; i >= 0; i--) {
			if(K >= coin[i]) {// K보다 작거나 같으면서 가장 가치가 큰 coin[i]를 찾는는다.
				// K / coin[i]를 통해 coin[i]가 몇번 쓰였는지 개수를 센다.
				// 그리고 그 몫을 count에 누적시킨다.
				count += (K / coin[i]);
				// coin[i]*몫한 나머지 값. 즉, K % coin[i]한 값을 변수 K에 다시 넣어준다.
				K = (K % coin[i]);
				// K = 0이 되는 순간 반복문은 끝난다.
				// 반복이 돌아가능 동안 누적된 count값은 N개의 동전의 종류 중 최소한의 동전으로
				// K의 값과 같아진 동전들의 개수다.
			}
		}
		// 최소한의 동전 개수 출력
		System.out.println(count);
	}
}