#include <stdio.h>

int main(){
    long long r, c, n, x, y;
    scanf("%lld %lld %lld", &r, &c, &n);
    if (r%n)
        x = r/n + 1;
    else
        x = r/n;
    if (c%n)
        y = c/n + 1;
    else
        y = c/n;
    printf("%lld", x*y);
    return 0;
}