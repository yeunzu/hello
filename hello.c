# include <stdio.h>

int main(void) {
	int x, y;
	x = 20, y = 10;
	printf("�� ���� ��: %d\n", x + y);
	printf("�� ���� ��: %d\n", x - y);
	printf("�� ���� ��: %d\n", x * y);
	printf("�� ���� ��: %d\n", x / y);
	printf("�� ���� ������: %f\n", (float)x / (float)y); // �̰� ��. (float)x�� x�� �Ǽ������� ��ȯ.

	return 0;
}