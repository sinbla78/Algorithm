#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.1f", 0.5* (float)a * (float)b);
    
    return 0; // You should return an integer from the main function.
}
