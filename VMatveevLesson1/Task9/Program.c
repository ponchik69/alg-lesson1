/*
* ��������: �������� �������
*
* ������ 12.
*
* ���� ����� ������������� ����� N � K. ��������� ������ �������� �������� � ���������, ����� ������� �� ������� ������ N �� K, � ����� ������� �� ����� �������.
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

	printf("������! ����� �����: \n");
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

	printf("������� ��  %d � %d: %d \n",a, b, div);
	printf("������� �� ������� %d � %d: %d \n",a, b, mod);

	_getch();
	return 0;
}