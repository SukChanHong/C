#include <stdio.h>

int main()
{
	float num;
	int inp;
	float sum = 0;
	float count = 0;
	// ����, �Ҽ� ǥ���� ���� ���� ������ ��� �ؾ��ϴ� �� �򰥸�
	//�̰ͺ��� �� �����ϰ� ������ �� ���� �� ���� �ѵ� �� �𸣰ڳ�

	printf("�� ���� ������ �Է�? : ");
	scanf_s("%f\n", &num);

	while (num > count)
	{
		scanf_s("%d", &inp);
		sum = sum + inp;
		count++;
	}
	
	printf("\n\n��� : %f", sum / num);
	//���⼭ int �� ������ ������ float�� ������ ������� ������ �̼��Ͽ� �� Ȱ������ ���� �� ����
}