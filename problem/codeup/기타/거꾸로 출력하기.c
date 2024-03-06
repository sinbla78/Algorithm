#include<stdio.h>

int stack[100];
int top = -1;

int is_empty() {
	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

int is_full() {
	if (top >= 99) {
		return 1;
	}
	else {
		return 0;
	}
}

int push(int item) {
	if (is_full()) {
		printf("Stack is Full");
		return 0;
	}
	else {
		return stack[++top] = item;
	}
}

int pop() {
	if (is_empty()) {
		printf("Stack is empty");
		return 0;
	}
	else {
		return stack[top--];
	}
}

int main() {
	int n, is;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &is);
			push(is);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", pop());
	}
	
}