#include <stdio.h>

int main(void) {
	int a = 0, i = 0;

	while (i <= 100) {
		if (i % 3 == 0)
			a = a + i;
		i++;
	}

	printf("1부터 100까지 3의 배수의 총합은 %d입니다,\n", a);
	return 0;
}