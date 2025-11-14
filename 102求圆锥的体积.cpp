#include <iostream>
using namespace std;
//define float pi =3.14;
int main()
{
	float r, height;
	const float pi = 3.14;
	cout << "请输入圆锥的底面半径和高\n";
	cin >> r >> height;
	cout << "圆锥的体积是" << pi * r * r * height / 3 << endl;
	return 0;
}