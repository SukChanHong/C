#include <stdio.h>

int main()
{
	int total = 0, num = 0;

	do
	{
		total += 2*num;
		num++;
	} while (num <= 50);

	printf("���� = %d", total);

	return 0;
}

//��� ����� ������ �ϴµ� ���� �ǵ��� ��Ȯ�� �����ߴ����� �� �𸣰���.