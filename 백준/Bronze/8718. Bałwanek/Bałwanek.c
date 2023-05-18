#include <stdio.h>

#define ll long long

int main() {
    ll x, k, a = 0, b = 0, c = 0;
    scanf("%lld %lld", &x, &k);
    
    if (7000 * k <= 1000 * x)
        a = 7000 * k;
    
    if (3500 * k <= 1000 * x)
        b = 3500 * k;
    
    if (1750 * k <= 1000 * x)
        c = 1750 * k;
    
    printf("%lld", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
    
    return 0;
}
