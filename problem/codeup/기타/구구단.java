```java
package main;

import java.util.Arrays;
import java.util.Scanner;

public class Class {
	public static void main(String[] args) {
		int[][] array = new int[8][9];
		
		//배열에 구구단의 결과값을 저장
		for(int i = 2; i < 10; i++) {
			for(int j = 1; j < 10; j++) {
				array[i-2][j-1] = i*j;
			}
		
		}
		//배열에 저장된 내용을 출력
		for(int i = 0; i < array.length; i++) {
			System.out.print((i+2) + "단 : ");
			System.out.print(Arrays.toString(array[i]));
			System.out.println();
		}
		
	}
```
# java 이차원 배열 이용하여 구구단 출력
``` 결과
2단 : [2, 4, 6, 8, 10, 12, 14, 16, 18]
3단 : [3, 6, 9, 12, 15, 18, 21, 24, 27]
4단 : [4, 8, 12, 16, 20, 24, 28, 32, 36]
5단 : [5, 10, 15, 20, 25, 30, 35, 40, 45]
6단 : [6, 12, 18, 24, 30, 36, 42, 48, 54]
7단 : [7, 14, 21, 28, 35, 42, 49, 56, 63]
8단 : [8, 16, 24, 32, 40, 48, 56, 64, 72]
9단 : [9, 18, 27, 36, 45, 54, 63, 72, 81]
```
