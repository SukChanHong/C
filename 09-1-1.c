#include <stdio.h>

int largestnum(int num1, int num2, int num3);
int smallestnum(int num1, int num2, int num3);

int main()
{
	int num1, num2, num3;
	
	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	printf("%d, %d, %d �� ���� ū �� : %d \n", num1, num2, num3, largestnum(num1, num2, num3));
	printf("%d, %d, %d �� ���� ���� �� : %d \n", num1, num2, num3, smallestnum(num1, num2, num3));
	
	return 0;
}

int largestnum(int num1, int num2, int num3)
{
	if (num1 > num2, num1 > num3)
		return num1;
	else if (num2 > num1, num2 > num3)
		return num2;
	else if (num3 > num1, num3 > num2)
		return num3;
}

int smallestnum(int num1, int num2, int num3)
{
	if (num1 < num2, num1 < num3)
		return num1;
	else if (num2 < num1, num2 < num3)
		return num2;
	else if (num3 < num1, num3 < num2)
		return num3;
}