#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int treatment = rand() % 4;
	printf("\n\n === 자라나라 머리카라 게임 === \n\n");
	int cntShowBottle = 0;
	int prevCntShowBottle = 0;
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = {0, 0, 0, 0};
		do {
			cntShowBottle = rand() % 2 + 2;
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;
		printf(" > %d번째 테스트 : ", i);
	}
	return 0;
}
