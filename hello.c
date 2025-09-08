# define _CRT_SECURE_NO_WARNINGS /*scanf() 함수의 오류를 해결하기 위함*/
# include <stdio.h>

int main(void) {
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	// scanf_s("%d", &x);
	printf("입력한 정수 = %d\n", x);
	return 0;
}