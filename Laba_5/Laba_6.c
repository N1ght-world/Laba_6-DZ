#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int isLeapYear(int yeas);
double calculateF(double x);
int checkInInterval(double val, double a, double b);

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int yeas;
    printf("Введите год: ");
    scanf("%d", &yeas);
    if (isLeapYear(yeas))
    {
        printf("Год %d високосный\n", yeas);
    }
    else
    {
        printf("Год %d не високосный\n", yeas);
    }


    double x;
    printf("Введите x: ");
    scanf("%lf", &x);
    double F = calculateF(x);
    printf("F(x) = %.6lf\n", F);


    double x1, y1, z1;
    int f = 0;

    printf("Введите три вещественных числа через пробел: ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Числа, принадлежащие интервалу (-1, 1):\n");
    if (checkInInterval(x1, -1.0, 1.0)) 
    { printf("%g\n", x1); f++; }
    if (checkInInterval(y1, -1.0, 1.0)) 
    { printf("%g\n", y1); f++; }
    if (checkInInterval(z1, -1.0, 1.0)) 
    { printf("%g\n", z1); f++; }

    if (f == 0)
    {
        printf("Ни одно из чисел не принадлежит интервалу.\n");
    }

    return 0;
}

int isLeapYear(int yeas)
{
    return ((yeas % 4 == 0 && yeas % 100 != 0) || yeas % 400 == 0);
}

double calculateF(double x)
{
    return (x <= 3.0) ? (-pow(x, 2) + 3.0 * x + 9.0) : (x / (pow(x, 2) + 1));
}

int checkInInterval(double val, double a, double b)
{
    return (val > a && val < b);
}

/*
Схема isLeapYear(yeas):

Начало.
Получение параметра yeas.
Решение: ((yeas % 4 == 0 && yeas % 100 != 0) || yeas % 400 == 0) ?
    Да: Возврат 1.
    Нет: Возврат 0.
Конец.

    Схема calculateF(x) :

Начало.
Получение параметра x.
Решение: x <= 3.0 ?
    Да: Вычислить F = -x ^ 2 + 3x + 9.
    Нет: Вычислить F = x / (x ^ 2 + 1).
Возврат F.
Конец.

    Схема фрагмента main для DZ_Lab_6 :

Ввод x1, y1, z1.
Процесс: f = 0.
Обращение к функции : checkInInterval(x1, -1.0, 1.0).
Если вернулась 1: Печать x1, f = f + 1.
Обращение к функции : checkInInterval(y1, -1.0, 1.0).
Если вернулась 1: Печать y1, f = f + 1.
Обращение к функции : checkInInterval(z1, -1.0, 1.0).
Если вернулась 1: Печать z1, f = f + 1.
Решение: f == 0 ?
Да: Печать «Ни одно из чисел не принадлежит интервалу.».
Переход к завершению main.
*/

