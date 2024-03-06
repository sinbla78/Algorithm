#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    
    int odd = 0;
    if(n%2==1){odd=1;n--;}
    while (n) {
        if(n%2==0){printf("1 ");}
        else{printf("2 ");}
        n--;
    }
    if(odd){printf("3");}
    
    return 0;
}