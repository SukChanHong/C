#include <stdio.h>

int main()
{
	int a, b;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	for (b = 1; a > 0; a--)
		b = b * a;

	printf("n! = %d", b);

	return 0;

}