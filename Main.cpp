#include <conio.h>
#include <iostream>
#include <limits.h>


int main() {
	setlocale(LC_CTYPE, "rus");

	/*printf_s("������� �����\n");
	int b;
	scanf_s("%d", &b);
	if (b > 0){
		b++;
	}
	printf_s("%d\n", b);
	*/
	//���� ����� ����� ���� ��� ������� �� �������� � ���� 1 � �������� ������ �� ������������ ���

	/*printf_s("������� �����\n");
	int b;
	scanf_s("%d", &b);

	if (b > 0) {
		b++;
	}
	else if (b < 0)
	{
		b = b - 2;
	}
	else
	{
		b = 10;
	}

	printf_s("%d\n", b);*/

	//���� ����� ����� ���� ���������� �� �������� 1 ����� ������� 2 ���� 0���������� �� �� ������ ������� 
	//������ ����� � � � ���������� ����� ��������� ���� ����� � ���������� ������� ��������� �������� �������� ������� ������������, ��� ����������� � ����� �� �����

	/*printf_s("������� ����� X Y\n");
	int x, y;
	scanf_s("%d%d", &x, &y);

	if (x > 0 && y > 0){
		printf_s("����� � ������ ����\n");
	}
	else if (x < 0 && y > 0)
	{
		printf_s("����� �� ������ ����\n");
	}
	else if (x < 0 && y < 0)
	{
		printf_s("����� � ������� ����");
	}
	else if (x > 0 && y < 0)
	{
		printf_s("����� � ��������� ����");
	}
	else if (x == 0 && y == 0)
	{
		printf_s("����� � ������ ���������");
	}
	else if (x == 0 && y != 0)
	{
		printf_s("����� �� ��� Y");
	}
	else
	{
		printf_s("����� �� ��� X");
	}*/


	//����� ������������� ��� ��������� � � � ����� ����� ����� ���� ��������� ��� ������������� ���� ������� ��� �������

	/*printf_s("������� a b al\n");
	int a, b, al;
	scanf_s("%d%d%d", &a, &b, &al);

	if (a == b && al == 90)
	{
		printf_s("�������");
	}
	else if (a != b && al == 90)
	{
		printf_s("�������������");
	}
	else
	{
		printf_s("����");
	}*/

	/*printf_s("������� X\n");
	int a=30, b=20, x, t;
	scanf_s("%d", &x);

	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}

	if (x < a || x > b)
	{
		printf_s("����� ��������� �� ��������� �������\n");
	}
	else
	{
		printf_s("����� ��������� � �������� �������\n");
	}*/


	//

	/*printf_s("������� ��������� ���������� x0 y0 r\n");
	int x0, y0, r, x1, y1, l;
	scanf_s("%d%d%d", &x0, &y0, &r);
	printf_s("������� ��������� ���������� x1 y1\n");
	scanf_s("%d%d", &x1, &y1);

	l = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);

	//printf_s("%d\n", l);
	//printf_s("%d\n", r * r, "<--R");
	if (l > r * r)
	{
		printf_s("����� ��� ����������");
	}
	else
	{
		printf_s("����� � ����������");
	}*/
















	// 1
	//printf_s("������� �����  --> ");
	//int a, b, c;
	//int pl = 0, ot = 0;
	//scanf_s("%d%d%d", &a, &b, &c);
	//if (a > 0)
	//{
	//	pl++;
	//}
	//else
	//{
	//	ot++;
	//}

	//if (b > 0)
	//{
	//	pl++;
	//}
	//else
	//{
	//	ot++;
	//}

	//if (c > 0)
	//{
	//	pl++;
	//}
	//else
	//{
	//	ot++;
	//}

	//printf_s("������������� %d ������������� %d", pl, ot);


	// 2
	//printf_s("������� ��� --> ");
	//int a;
	//scanf_s("%d", &a);
	//if (a % 4 == 0)
	//{
	//	printf_s("��� ����������");
	//}
	//else
	//{
	//	printf_s("��� �� ����������");
	//}


	// 3
	//printf_s("������� x  --> ");
	//int x;
	//scanf_s("%d", &x);
	//if (x <= 0)
	//{
	//	x = -x ;
	//}
	//else if (x > 0 && x < 2)
	//{
	//	x = x * x;	
	//}
	//else if (x >= 2)
	//{
	//	x = 4;
	//}
	//printf_s("--> %d", x);


	// 4
	/*printf_s("������� �����  --> ");
	int a, b, c, d;
	int pn;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a == b && b == c && c == a)
	{
		pn = 4;
	}
	else if (a == b && b == a && d == a)
	{
		pn = 3;
	}
	else if (a == c && c == a && d == a)
	{
		pn = 2;
	}
	else
	{
		pn = 1;
	}
	printf_s("����� ��� ������� %d ������� �� ���������", pn);*/

	// 5
	printf_s("������� 2 �����  ---> ");
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (a != b)
	{
		if (a > b)
		{
			b = a;
		}
		else
		{
			a = b;
		}
	}
	else
	{
		b = 0;
		a = 0;
	}
	printf_s("-----> %d %d", a, b);

	_getch();
	return 0;
}