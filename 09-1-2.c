#include <stdio.h>

double CelToFah(double cel);
double FahToCel(double fah);

double main()
{
	int sel, cel, fah;
	printf("1. ���� �µ��� ȭ�� �µ��� ��ȯ\n2. ȭ�� �µ��� ���� �µ��� ��ȯ\n");
	printf("� ���� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		double num;
		printf("�����µ��� �Է��ϼ��� : ");
		scanf_s("%lf", &num);
		printf("%f", CelToFah(num));

	}

	else if (sel == 2)
	{
		double num;
		printf("ȭ���µ��� �Է��ϼ��� : ");
		scanf_s("%lf", &num	);
		printf("%f", FahToCel(num));
	}

	else
	{

	printf("�ش� ��ȣ�� ���񽺸� �������� �ʽ��ϴ�.1��, 2�� �� �ϳ��� �����Ͻʽÿ�.");
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
