#include <stdio.h>

int main()
{
	int a, b;
	int res;

	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);

	res = a - b;

	printf("\n�� ���� �� : ");

	if (res > 0)
		printf("%d", res);

	else
		printf("%d", res*(-1));

	return 0;
}

//�� ���� �� ������ ����� ��������.
