#include <stdio.h>

int main()
{
	int a = 1; //a�� ���� ������ ������ ����ڰ� a�� �Է��ϸ鼭 ���� �ٲ�� ������ 0�� �ƴ� ���� �Է��ϸ� �� ��
	int sum = 0;
	while (a != 0)
	{
		scanf_s("%d", &a);
		sum = sum + a;
	}
	printf("sum = %d", sum);
	return 0;
}