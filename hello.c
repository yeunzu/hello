# define _CRT_SECURE_NO_WARNINGS /*scanf() �Լ��� ������ �ذ��ϱ� ����*/
# include <stdio.h>

int main(void) {
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	// scanf_s("%d", &x);
	printf("�Է��� ���� = %d\n", x);
	return 0;
}