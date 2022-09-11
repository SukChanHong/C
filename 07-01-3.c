#include <stdio.h>

int main()
{
	int a = 1; //a의 값에 무엇이 오더라도 사용자가 a를 입력하면서 값이 바뀌기 때문에 0이 아닌 값만 입력하면 될 듯
	int sum = 0;
	while (a != 0)
	{
		scanf_s("%d", &a);
		sum = sum + a;
	}
	printf("sum = %d", sum);
	return 0;
}