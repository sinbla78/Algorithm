#include <stdio.h>
#include <string.h>

int main(){
	char str[1000] = "\0";
	char f, l;
	int n, i, length = 0;

	scanf("%d", &n);
    for(i = 0; i < n; i++){
		scanf("%s", str);
		length = strlen(str);
		
		f = str[0];
		l = str[length - 1];

		printf("%c%c\n", f, l);

	}
}