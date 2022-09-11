#include <stdio.h>

int main()
{
	float num;
	int inp;
	float sum = 0;
	float count = 0;
	// 정수, 소수 표현을 위해 변수 설정을 어떻게 해야하는 지 헷갈림
	//이것보다 더 간단하게 정리할 수 있을 것 같긴 한데 잘 모르겠네

	printf("몇 개의 정수를 입력? : ");
	scanf_s("%f\n", &num);

	while (num > count)
	{
		scanf_s("%d", &inp);
		sum = sum + inp;
		count++;
	}
	
	printf("\n\n평균 : %f", sum / num);
	//여기서 int 형 변수를 강제로 float형 변수로 만들려고 했으나 미숙하여 잘 활용하지 못한 것 같음
}