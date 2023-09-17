#include <stdio.h>

void p(int num);
int add(int num1, int num2) {
	return num1 + num2;
}

int main(void) {
	int num = 2;
	num = add(num, 3);
	p(num);
