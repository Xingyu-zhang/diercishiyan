//�������������
#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	float a, b, c, fi, d, S;
	cout << "�����������ߵĳ����ÿո����" << endl;
	cin >> a >> b >> c;
	fi = (a + b + c) / 2;
	d = fi * (fi - a)*(fi - b)*(fi - c);
	S = sqrt(d);
	cout <<"���Ϊ"<< S;
	getchar();
	getchar();

}