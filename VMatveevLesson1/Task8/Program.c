/*
* Выполнил: Владимир Матвеев
*
* Задача 12.
*
* Ввести a и b и вывести квадраты и кубы чисел от a до b.
*
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main(int argc, const char* argv[])
{
	setlocale(LC_ALL, "rus");

	int a, b, p, k;

	printf("Привет! Введи два числа: \n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);

	if (a <= b)
	{
		for (; a <= b; a++)
		{
			p = pow(a, 2);
			k = pow(a, 3);
			printf("Число %d, квадрат: %d, куб: %d\n", a, p, k);
		}
	}
	else
	{
		for (; b < a; b++)
		{
			p = pow(b, 2);
			k = pow(b, 3);
			printf("Число %d, квадрат: %d, куб: %d\n", b, p, k);
		}
	}

	_getch();
	return 0;
}