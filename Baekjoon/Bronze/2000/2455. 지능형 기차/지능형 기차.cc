#include <stdio.h>
 
int main() {
 
    int a, b;
    int sum = 0;
    int max = 0;
 
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &a, &b);
        sum += -a + b;
        if (sum > max)
            max = sum;
    }
    printf("%d", max);
}