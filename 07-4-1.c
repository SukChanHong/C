#include <stdio.h>

int main()
{
	int a, b;
	int c;
	int cnt;
	int sum = 0;

	printf("�� ���� a, b �Է� (��, a < b) : ");
	scanf_s("%d %d", &a, &b);
	c = a;
	for (cnt = 0; cnt < b - a + 1; cnt++) // cnt > b-a ���� cnt< b-a���� cnt<b-a+1���� �򰥸���..
	{
		sum += c;
		c++;
	}
	printf("���� : %d", sum);

	return 0;
}