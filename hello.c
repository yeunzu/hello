# define _CRT_SECURE_NO_WARNINGS /*scanf() �Լ��� ������ �ذ��ϱ� ����*/
# include <stdio.h>

int main(void) {
	// ���� ���� ��� ���α׷�
	double radius;
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);
	printf("���� ����: %f\n", 3.14 * radius * radius);

	// ��� ����ϴ� ���α׷�
	double num1, num2, num3;
	printf("3���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	printf("�հ�=%.2f\n", num1 + num2 + num3);
	printf("���=%.2f\n", (num1 + num2 + num3) / 3);
	//return 0;

	// �簢���� �ѷ��� ���� ���ϱ�
	double width, height;
	width = 10.0, height = 5.0;
	printf("�簢���� ����: %f\n", width * height);
	printf("�簢���� �ѷ�: %f\n", 2 * (width + height));
	printf("�簢���� ����: %f\n�簢���� �ѷ�: %f\n", width * height, 2*(width + height)); // ��������
	// return 0;

	return 0;
}