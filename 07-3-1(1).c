#include <stdio.h>

int main()
{
	int total = 0, num = 1;

	while (num != 0)
	{
		printf("���� �Է� (0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	}
	
	printf("�հ� : %d \n", total);

	return 0;
}