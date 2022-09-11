#include <stdio.h>

int main()
{
	int a, b;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);

	for (b = 1; a > 0; a--)
		b = b * a;

	printf("n! = %d", b);

	return 0;

}