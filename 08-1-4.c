#include <stdio.h>

int main()
{
	int a, b;
	int res, abs;

	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &a, &b);

	res = a - b;

	abs = res > 0 ? res : res * (-1);
	printf("�� ���� �� : %d", abs);

	return 0;

}

//�� ���� �� �׻� ����� ��������, ���� �����ڸ� ����ؼ�