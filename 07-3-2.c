#include <stdio.h>

int main()
{
	int total = 0, num = 0;

	do
	{
		total += 2*num;
		num++;
	} while (num <= 50);

	printf("총합 = %d", total);

	return 0;
}

//계산 결과가 나오긴 하는데 문제 의도를 정확히 구현했는지는 잘 모르겠음.