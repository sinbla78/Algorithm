#include <stdio.h>

int main(void) {

	int n1, n2;
	
	scanf("%d %d", &n1, &n2);
	
	n1 = n1/100 + ((n1/10)%10)*10 + ((n1%100)%10)*100;
	n2 = n2/100 + ((n2/10)%10)*10 + ((n2%100)%10)*100;

	if(n1 < n2) printf("%d", n2);
	else printf("%d", n1);
}