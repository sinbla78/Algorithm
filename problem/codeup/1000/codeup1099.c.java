//#성실한 개미
//{개미 오른쪽(y좌표)로 0일 떄 이동, 1을 만나면 아래쪽(x좌표)로 이동, 2를 만나거나 더 이상 이동하지 못하는우경우 그 곳에 머무르기, 이동경로 9로 나타내기

import java.util.Scanner; 

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[][] antHouse = new int[11][11];
		
		int a;
		for(int i=1; i < antHouse.length; i++) {
			for(int j=1; j<antHouse.length; j++){
                a = sc.nextInt();
                antHouse[i][j] = a;
            }
		}
		
		int y = 2;
		Boolean x = false;
		
		for(int i=2; i<11; i++) {
			for(int j=y; j<11; j++) {
				if(antHouse[i][j] == 2) {
					x =true;
					antHouse[i][j] = 9;
					break;
				}
				if(antHouse[i][j] == 0) {
					antHouse[i][j] = 9;
				}
				else if(antHouse[i][j] == 1) {
					y = j-1;
					break;
				}
			}
			if(x) {
				break;
			}
		}
		sc.close();
		for(int i=1; i<antHouse.length; i++){
            for(int j=1; j<antHouse.length; j++){
                System.out.printf("%d ", antHouse[i][j]);
            }
            System.out.println();
        }
	}

}

``` 결과
입력(example)
1 1 1 1 1 1 1 1 1 1
1 0 0 1 0 0 0 0 0 1
1 0 0 1 1 1 0 0 0 1
1 0 0 0 0 0 0 1 0 1
1 0 0 0 0 0 0 1 0 1
1 0 0 0 0 1 0 1 0 1
1 0 0 0 0 1 2 1 0 1
1 0 0 0 0 1 0 0 0 1
1 0 0 0 0 0 0 0 0 1
1 1 1 1 1 1 1 1 1 1
출력(example)
1 1 1 1 1 1 1 1 1 1
1 9 9 1 0 0 0 0 0 1
1 0 9 1 1 1 0 0 0 1
1 0 9 9 9 9 9 1 0 1
1 0 0 0 0 0 9 1 0 1
1 0 0 0 0 1 9 1 0 1
1 0 0 0 0 1 9 1 0 1
1 0 0 0 0 1 0 0 0 1
1 0 0 0 0 0 0 0 0 1
1 1 1 1 1 1 1 1 1 1
```
