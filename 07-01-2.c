#include <stdio.h>

int main()
{
	int a;
	int i = 0;
	scanf_s("%d", &a);
	while (i < a)
	{
		printf("%d ", 3 * (i + 1));//i+1을 해야하는 부분에서 고민을 함
		i++;
	}
	return 0;
}