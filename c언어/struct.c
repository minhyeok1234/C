#include <stdio.h>

struct GameInfo {
	char * name;
	int year;
	int price;
	char * company;
};

int main(void) {
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2023;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";
	printf("-- 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo1.name);
	printf("발매 연도 : %d\n", gameInfo1.year);
	printf("게임 가격 : %d\n", gameInfo1.price);
	printf("제작 회사 : %s\n", gameInfo1.company);
	return 0;
}
