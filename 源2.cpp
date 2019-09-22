//判断一天是第几周第几天
#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	int a, b, c, r, z, d;
	int y1[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int y2[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	cout << "请输入年，月，日的值，用空格隔开" << endl;
	cin >> a >> b >> c;
	r = 0;
	if ((a%4==0&&a%100!=0)||(a%100==0&&a%400==0))
	{
		for (int i = 0; i < b; i++)
		{
			r = r + y2[i];
		}
		r = r + c;
	}
	else
	{
		for (int i = 0; i < b; i++)
		{
			r = r + y1[i];
		}
		r = r + c;
	}
	z = r / 7 + 1;
	d = r % 7;
	cout << "第" << z << "周   第" << d << "天";
	getchar();
	getchar();

}