#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "short length" << sizeof(short) << endl;
	cout << "long length" << sizeof(long) << endl;
	cout << "float length" << sizeof(float) << endl;
	cout << "double length" << sizeof(double) << endl;
	cout << "wchar_t length" << sizeof(wchar_t) << endl;
	return 0;
}
//bit 计算机最小的数据单位，存放一个二进制数
//byte 字节，8个bit组成一个byte