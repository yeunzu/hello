# include <stdio.h>

int main(void) {
	int x, y;
	x = 20, y = 10;
	printf("두 수의 합: %d\n", x + y);
	printf("두 수의 차: %d\n", x - y);
	printf("두 수의 곱: %d\n", x * y);
	printf("두 수의 몫: %d\n", x / y);
	printf("두 수의 나눗셈: %f\n", (float)x / (float)y); // 이건 덤. (float)x는 x를 실수형으로 변환.

	return 0;
}