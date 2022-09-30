#include <stdio.h>

double CelToFah(double cel);
double FahToCel(double fah);

double main()
{
	int sel, cel, fah;
	printf("1. 섭씨 온도를 화씨 온도로 변환\n2. 화씨 온도를 섭씨 온도로 변환\n");
	printf("어떤 것을 선택하시겠습니까? : ");
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		double num;
		printf("섭씨온도를 입력하세요 : ");
		scanf_s("%lf", &num);
		printf("%f", CelToFah(num));

	}

	else if (sel == 2)
	{
		double num;
		printf("화씨온도를 입력하세요 : ");
		scanf_s("%lf", &num	);
		printf("%f", FahToCel(num));
	}

	else
	{

	printf("해당 번호는 서비스를 지원하지 않습니다.1번, 2번 중 하나를 선택하십시오.");
	}
	
	return 0;

}

double CelToFah(double cel)
{
	return 1.8*cel + 32;
}
	

double FahToCel(double fah)
{
	return (fah - 32) / 1.8;
}
