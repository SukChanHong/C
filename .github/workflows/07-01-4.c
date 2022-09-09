#include <stdio.h>

int main()
{
	int a, b;
	b = 9;
	scanf_s("%d", &a);
	while (b > 0)
	{
		printf("%d x %d = %d\n", a, b, a*b);
		b--;
	}
	return 0;
}