/*
* ��������: �������� �������
*
* ������ 12.
*
* �������� ������� ���������� ������������� �� ���� �����.
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
	printf("������! ����� 3 �����: \n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);
	printf("c: ");
	scanf_s("%d", &c);

	int max = FindMaxNubber(a, b, c);
	printf("������������ �� ���� ����� %d %d � %d ��������: %d", a, b, c, max);

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
