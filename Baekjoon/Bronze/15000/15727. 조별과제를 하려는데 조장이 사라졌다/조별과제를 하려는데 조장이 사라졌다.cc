#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int L, t;
    scanf("%d", &L);
    t = L;
    for (int i = 0; i < L; i++) {
        if (t > 5)
            t -= 5;
        else {
            printf("%d", i + 1);
            break;
        }
    }
}