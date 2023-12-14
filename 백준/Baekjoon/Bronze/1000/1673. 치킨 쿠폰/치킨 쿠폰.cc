#include<stdio.h>

int main(){
    int n, k, re, sum;
    while(scanf("%d %d", &n, &k) != EOF){
        if(k>1 && k <= n && n <= 1000000000){
            sum = n;
            while(n>=k){
                re = n % k;
                n = n / k;
                sum += n;
                n += re;
            }
            printf("%d\n", sum);
        }
    }
}