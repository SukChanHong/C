#include <stdio.h>

int main()
{
	int a;
	int i = 0;
	scanf_s("%d", &a);
	while (i < a)
	{
		printf("Hello World!\n");
		i++;
	}
	return 0;
}