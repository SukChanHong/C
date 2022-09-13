#include <stdio.h>

int main()
{
	int a, b;
	int res;

	printf("두 정수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	res = a - b;

	printf("\n두 수의 차 : ");

	if (res > 0)
		printf("%d", res);

	else
		printf("%d", res*(-1));

	return 0;
}

//두 수의 차 무조건 양수가 나오도록.
