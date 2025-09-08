# include <stdio.h>

int main(void) {
	//int x;
	//int y;
	//int sum;
	//x = 100;
	//y = 200;
	//sum = x + y;
	//printf("두 수의 합 : %d\n", sum);
	//return 0;

	int x, y, sum;
	x = 100, y = 200;
	/*
	* 이건 컴파일 안된다.
	* x, y = 100, 200; (파이썬에서나 가능한 짓)
	*/
	sum = x + y;
	printf("두 수의 합 : %d \n", sum);
	return 0;
}