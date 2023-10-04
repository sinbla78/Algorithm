#include <stdio.h>

int main(void) {
    int a;
    //printf("Enter the value of 'a': ");
    scanf("%d", &a);

    for(int i = 0; i < a; i++) {
        int b, c, d;
        //printf("Enter values for 'b', 'c', and 'd' separated by spaces: ");
        scanf("%d %d %d", &b, &c, &d);
        printf("%d\n", b * (d - 1) + c);
    }

    return 0;
}
