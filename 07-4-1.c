#include <stdio.h>

int main()
{
	int a, b;
	int c;
	int cnt;
	int sum = 0;

	printf("두 정수 a, b 입력 (단, a < b) : ");
	scanf_s("%d %d", &a, &b);
	c = a;
	for (cnt = 0; cnt < b - a + 1; cnt++) // cnt > b-a 인지 cnt< b-a인지 cnt<b-a+1인지 헷갈리네..
	{
		sum += c;
		c++;
	}
	printf("총합 : %d", sum);

	return 0;
}