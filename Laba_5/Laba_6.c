#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	Task_1();
	Task_2();
	DZ_Lab_6();

	return 0;
}

int Task_1()
{
	int yeas;

	printf("Введите год: ");
	scanf("%d", &yeas);

	int ost = yeas % 4;
	if ((ost == 0 && yeas % 100 != 0) || yeas % 400 == 0)
	{
		printf("Год %d високосный\n", yeas);
	}
	else
	{
		printf("Год %d не високосный\n", yeas);
	}
	return 0;
}

int Task_2()
{
	double x,F;

	printf("Введите x: ");
	scanf("%lf", &x);
	if (x <= 3.0)
	{
		F = -pow(x, 2) + 3.0 * x + 9.0;
	}
	else
	{
		F = x / (pow(x, 2) + 1);
	}
	printf("F(x) = %.6lf\n", F);
	return 0;
}

int DZ_Lab_6()
{
	double x;
	double y;
	double z;
	int f = 0;

	printf("Введите три вещественных числа через пробел: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	printf("Числа принадлежащие интервалу (-1, 1):\n");
	if (x > -1.0 && x < 1.0)
	{
		printf("%g\n", x);
		f++;
	}
	if (y > -1.0 && y < 1.0)
	{
		printf("%g\n", y);
		f++;
	}
	if (z > -1.0 && z < 1.0)
	{
		printf("%g\n", z);
		f++;
	}

	if (f == 0)
	{
		printf("Ни одно из чисел не принадлежит интервалу.\n");
	}
	return 0;
}

