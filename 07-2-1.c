#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	while (b < 5)
	{
		while (a <= 0) //a<0�̸� a = 0�϶� ������ ������Ű�� ���Ͽ� while ���� Ż��. 
		{
			scanf_s("%d", &a);
		}
		sum = sum + a;
		a = 0;
		b++;
		
	}

	printf("%d", sum);
	return 0;
}