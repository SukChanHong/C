#include <stdio.h>

int main()
{
	int total = 0, num;

	printf("���� �Է� (0 to quit) : ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("���� �Է� (0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	}

	printf("�հ� : %d \n", total);

	return 0;
}