//���һԪ���η���
#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	float x, x1, x2, a, b, c, d;
	cout << "������a��b��c��ֵ���ÿո����" << endl;
	cin >> a >> b >> c;
	d = b * b - 4 * a*c;
	if (d<0)
	{
		cout << "������ʵ��" << endl;
	} 
	else if (d==0)
	{
		x = (-b) / 2 * a;
		cout << "x=" << x << endl;
	}
	else
	{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		cout << "x1=" << x1 << "    x2=" << x2 << endl;
	}
	getchar();
	getchar();
	
}