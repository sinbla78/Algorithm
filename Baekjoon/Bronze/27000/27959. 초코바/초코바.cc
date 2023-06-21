#include <stdio.h>

int main(void){
    int a, b;
    int c;
    scanf("%d %d", &a, &b);
    c = a*100;
    if(c < b){
        printf("No");
    }
    else if(c >= b){
        printf("Yes");
    }
    return 0;
}