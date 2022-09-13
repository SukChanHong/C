#include <stdio.h>

int main()
{
	float kor, eng, mat, avg;

	printf("국어, 영어, 수학 점수 순서대로 입력 : ");
	scanf_s("%f %f %f", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3;
	
	printf("평균 점수 : %f, 학점 : ", avg);

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

//평균 점수 및 학점 산출 