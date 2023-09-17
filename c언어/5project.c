#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);

int main(void) {
	srand(time(NULL));
	for (int i = 1; i <= 5; i++) {
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		// printf("%d x %d ? \n", num1, num2);
	showQuestion(i, num1, num2);
	}
	return 0;
}

int getRandomNumber(int level) {
	return rand() % (level *9) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n########## %d번째 비밀번호 ########\n", level);
	printf("\n\t%d x %d ? \n\n", num1, num2);
	printf("##################################\n");
	printf("\n비밀번호를 입력하세요.(종료를 원하면 -1 입력) >> ");
}
