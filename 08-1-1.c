#include <stdio.h>

int main()
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d\n", num);
	}
	return 0;
}

//100 �̸� 7�� ���, 9�� ��� ǥ��