#include <stdio.h>

int main(void) {
    
    int input, sum=1;
    int num[10];
    
    for(int i=0; i<10; i++) num[i] = 0; // 배열 값 0으로 지정
    
    for(int i=0; i<3; i++) { // A*B*C 구하기
        scanf("%d", &input);
        sum *= input;
    }
    
    for(int i=0; sum > 0; i++) { // 각 숫자가 몇 번 쓰였는지 구하기
        input = sum % 10;
        num[input] += 1;
        sum /= 10;
    }
    
    for(int i=0; i<10; i++) printf("%d\n", num[i]);
}