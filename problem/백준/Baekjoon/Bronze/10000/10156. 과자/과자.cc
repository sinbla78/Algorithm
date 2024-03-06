#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int map;
    map = a*b-c;
    if(map >= 0){
         printf("%d", a*b-c);
    }
    else{
        printf("0");
    }
    return 0;
}