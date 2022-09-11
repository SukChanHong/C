#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	while (b < 5)
	{
		while (a <= 0) //a<0이면 a = 0일때 조건을 충족시키지 못하여 while 문을 탈출. 
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