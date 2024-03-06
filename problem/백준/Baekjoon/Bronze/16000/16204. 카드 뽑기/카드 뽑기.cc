#include<stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int ans = (m > k ? k : m) + ((n - m) > (n - k) ? (n - k) : (n - m));
    printf("%d", ans);
    return 0;
}