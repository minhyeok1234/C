#include <stdio.h>

int function_with_return();
void p(int num);

int main(void) {
	int ret;
	ret = function_with_return();
	p(ret);
	return 0;
}

int function_with_return()
void p(int num) {
	printf("num은 %d입니다.\n", num);
}
