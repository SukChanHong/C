#include <stdio.h>

int main()
{
	float kor, eng, mat, avg;

	printf("����, ����, ���� ���� ������� �Է� : ");
	scanf_s("%f %f %f", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3;
	
	printf("��� ���� : %f, ���� : ", avg);

	if (avg >= 90)
		printf("A");
	else if (avg >= 80)
		printf("B");
	else if (avg >= 70)
		printf("C");
	else if (avg >= 50)
		printf("D"); 
	else 
		printf("F");

	return 0;
}

//��� ���� �� ���� ���� 