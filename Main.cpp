#include <conio.h>
#include <iostream>
#include <limits.h>


int main() {
	setlocale(LC_CTYPE, "rus");

	/*printf_s("Введите число\n");
	int b;
	scanf_s("%d", &b);
	if (b > 0){
		b++;
	}
	printf_s("%d\n", b);
	*/
	//дано целое число если оно положит то прибатть к нему 1 в противнм случае не отрабатывать его

	/*printf_s("Введите число\n");
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

	//дано целое число если оноположит то прибавит 1 иначе вычесть 2 если 0тозаменить ео на дечять вывести 
	//задана точка с х у оприделить место положение этой точки в декартовой системе координат являестя этаточка началом координанатб, или расположена в одном из углов

	/*printf_s("Введите числа X Y\n");
	int x, y;
	scanf_s("%d%d", &x, &y);

	if (x > 0 && y > 0){
		printf_s("Точка в первом углу\n");
	}
	else if (x < 0 && y > 0)
	{
		printf_s("Точка во втором углу\n");
	}
	else if (x < 0 && y < 0)
	{
		printf_s("Точка в третьем углу");
	}
	else if (x > 0 && y < 0)
	{
		printf_s("Точка в четвертом углу");
	}
	else if (x == 0 && y == 0)
	{
		printf_s("Точка в начале координат");
	}
	else if (x == 0 && y != 0)
	{
		printf_s("Точка на оси Y");
	}
	else
	{
		printf_s("Точка на оси X");
	}*/


	//задан параллелограм сос тороноами а б и углом альфа между ними пределить тип параллкограма ромб прямоуг или квадрат

	/*printf_s("Введите a b al\n");
	int a, b, al;
	scanf_s("%d%d%d", &a, &b, &al);

	if (a == b && al == 90)
	{
		printf_s("Квадрат");
	}
	else if (a != b && al == 90)
	{
		printf_s("Прямоугольник");
	}
	else
	{
		printf_s("Ромб");
	}*/

	/*printf_s("Введите X\n");
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
		printf_s("Число находится за пределами отрезка\n");
	}
	else
	{
		printf_s("Число находится в пределах отрезка\n");
	}*/


	//

	/*printf_s("Введите параметры окружности x0 y0 r\n");
	int x0, y0, r, x1, y1, l;
	scanf_s("%d%d%d", &x0, &y0, &r);
	printf_s("Введите параметры окружности x1 y1\n");
	scanf_s("%d%d", &x1, &y1);

	l = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);

	//printf_s("%d\n", l);
	//printf_s("%d\n", r * r, "<--R");
	if (l > r * r)
	{
		printf_s("Точка вне окружности");
	}
	else
	{
		printf_s("Точка в окружности");
	}*/
















	// 1
	//printf_s("Введите числа  --> ");
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

	//printf_s("Положительных %d отрицательных %d", pl, ot);


	// 2
	//printf_s("Введите год --> ");
	//int a;
	//scanf_s("%d", &a);
	//if (a % 4 == 0)
	//{
	//	printf_s("Год високосный");
	//}
	//else
	//{
	//	printf_s("Год не високосный");
	//}


	// 3
	//printf_s("Введите x  --> ");
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
	/*printf_s("Введите числа  --> ");
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
	printf_s("Число под номером %d отлично от остальных", pn);*/

	// 5
	printf_s("Введите 2 числа  ---> ");
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