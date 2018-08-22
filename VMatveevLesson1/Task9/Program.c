/*
* Выполнил: Владимир Матвеев
*
* Задача 12.
*
* Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
*
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main(int argc, const char* argv[])
{
	setlocale(LC_ALL, "rus");

	int a, b;

	printf("Привет! Введи числа: \n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);

	int  i = b;
	int div = 1;

	do
	{
		i = i + b;
		div = div + 1;

	} while (a - i > b);

	int mod = a - i;

	printf("Частное от  %d и %d: %d \n",a, b, div);
	printf("Остаток от деления %d и %d: %d \n",a, b, mod);

	_getch();
	return 0;
}