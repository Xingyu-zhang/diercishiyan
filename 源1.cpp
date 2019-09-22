//计算三角形面积
#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	float a, b, c, fi, d, S;
	cout << "请输入三条边的长，用空格隔开" << endl;
	cin >> a >> b >> c;
	fi = (a + b + c) / 2;
	d = fi * (fi - a)*(fi - b)*(fi - c);
	S = sqrt(d);
	cout <<"面积为"<< S;
	getchar();
	getchar();

}