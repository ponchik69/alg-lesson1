/*
* Выполнил: Владимир Матвеев
*
* Задача 12.
*
* Написать функцию нахождения максимального из трех чисел.
*
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main(int argc, const char* argv[])
{
	setlocale(LC_ALL, "rus");

	int a, b, c;
	printf("Привет! Введи 3 числа: \n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);
	printf("c: ");
	scanf_s("%d", &c);

	int max = FindMaxNubber(a, b, c);
	printf("Максимальным из трех чисел %d %d и %d является: %d", a, b, c, max);

	_getch();
	return 0;
}

int FindMaxNubber(int a, int b, int c)
{
	int max;
	if (a >= b)
		max = a;
	else
		max = b;

	if (max <= c)
		max = c;

	return max;
}
