# define _CRT_SECURE_NO_WARNINGS /*scanf() 함수의 오류를 해결하기 위함*/
# include <stdio.h>

int main(void) {
	// 원의 면적 계산 프로그램
	double radius;
	printf("반지름을 입력하시오: ");
	scanf("%lf", &radius);
	printf("원의 면적: %f\n", 3.14 * radius * radius);

	// 평균 계산하는 프로그램
	double num1, num2, num3;
	printf("3개의 실수를 입력하시오: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	printf("합계=%.2f\n", num1 + num2 + num3);
	printf("평균=%.2f\n", (num1 + num2 + num3) / 3);
	//return 0;

	// 사각형의 둘레와 면적 구하기
	double width, height;
	width = 10.0, height = 5.0;
	printf("사각형의 넓이: %f\n", width * height);
	printf("사각형의 둘레: %f\n", 2 * (width + height));
	printf("사각형의 넓이: %f\n사각형의 둘레: %f\n", width * height, 2*(width + height)); // 도전문제
	// return 0;

	return 0;
}