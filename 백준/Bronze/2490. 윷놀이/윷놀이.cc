#include <stdio.h>
 
int main() {
 
    int n;                              /* for문밖에 cnt를 0으로 초기화 해버리면 3번의 반목문안에 4번의 반목문의 데이터가
 
                                            누적 되기 때문에 이상한 값이 나오고 하나의 값밖에 나오지 않는다.*/
        for (int i = 0; i < 3; i++) {
            int cnt = 0;                   // 1번째 4번의 반복문이 끝나고 새로운 2번쨰 4번의반복문이 시작할때 cnt가 0으로 초기화된다.
 
                                                  //그럼 3개의 값이 나온다.
            for (int i = 0; i < 4; i++) {
                scanf("%d", &n);
                if (n == 0)
                    cnt++;                        //n이 0이면 카운트한다.
 
 
            }
            if (cnt == 0)
                printf("E\n");
 
 
            else if (cnt == 1)
                printf("A\n");
 
 
            else if (cnt == 2)
                printf("B\n");
 
 
            else if (cnt == 3)
                printf("C\n");
 
 
            else if (cnt == 4)
                printf("D\n");
 
 
        }
}
