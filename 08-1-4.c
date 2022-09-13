#include <stdio.h>

int main()
{
	int a, b;
	int res, abs;

	printf("두 정수 입력 : ");
	scanf_s("%d %d", &a, &b);

	res = a - b;

	abs = res > 0 ? res : res * (-1);
	printf("두 수의 차 : %d", abs);

	return 0;

}

//두 수의 차 항상 양수가 나오도록, 조건 연산자를 사용해서