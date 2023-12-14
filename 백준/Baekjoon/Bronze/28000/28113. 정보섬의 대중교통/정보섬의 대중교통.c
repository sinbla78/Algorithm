#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    if (a == b) {
        printf("Anything\n");
    } 
    else if (a > b) {
        printf("Subway\n");
    } 
    else {
        printf("Bus\n");
    }

    return 0;
}
