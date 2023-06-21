#include <stdio.h>
#include <string.h>

int N;
char F[51][101];

int main(void){
    int len;

    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%s", &F[i]);
        if (i == 0) continue;
        else {
            len = strlen(F[i]);
            for (int j = 0; j < len; j++){
                if (F[i][j] != F[0][j]) F[0][j] = '?';
            }
        }
    }
    printf("%s", F[0]);
    return 0;
}