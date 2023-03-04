#include <stdio.h>

int main(void) {
	int cow, add, i, j, year;
	cow = add = 1;

	printf("输入年数：");
	scanf_s("%d", &year);

	for (i = 1; i <= year && i <= 3; i++)
		cow++;
	for (j =4; j <= year; j++) {
		if (j % 3 == 1)
			add++;
		cow += add;

	}
	printf("在第%d年的时候，共有%d头母牛", year, cow);

	return 0;
}