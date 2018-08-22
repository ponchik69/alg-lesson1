/* 
* Выполнил: Владимир Матвеев
*
* Задача 10.
*
* Дано целое число N (> 0). 
* С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры. 
* Если имеются, то вывести True, если нет — вывести False
*
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

typedef int bool;
#define TRUE 0;
#define FALSE 1;

int main(int argc, const char* argv[])
{
	setlocale(LC_ALL, "rus");

	int a;
	bool f = FALSE;

	printf("Привет! Введи число (N > 0): ");
	scanf_s("%d", &a);

	while (a != 0)
	{
		if (a % 10 % 2 != 0)
		{
			f = TRUE;
			break;
		}
		a = a / 10;
	}

	if(f == 0)
		printf("true\n");
	else
	printf("false\n");

	_getch();
	return 0;
}