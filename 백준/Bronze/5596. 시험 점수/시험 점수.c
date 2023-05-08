#include <stdio.h>

int main(){
    int a = 0, b = 0, t, i;
    for (i = 0; i < 4; i++){
        scanf("%d", &t);
        a += t;
    }
    for (i = 0; i < 4; i++){
        scanf("%d", &t);
        b += t;
    }
    printf("%d", (a >= b) ? a : b);
    return 0;
}