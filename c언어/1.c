#include <stdio.h>

void function_without_return();

int main(void) {
	int ret = function_without_return();
	printf("%d", ret);
	return 0;
}

void function_without_return() {
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}
