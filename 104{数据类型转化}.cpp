#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	float num1=10.1;
	int truncatednum1 = static_cast<int>(num1);
	unsigned int testUnint = 65534;
	cout << truncatednum1 << endl;
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) <<static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	cout << "output in int type" << setprecision(8) << static_cast<int>(testUnint) << endl;//static_cast(int)类型转化
	cout << oct<< testUnint << endl;//八进制转化；

	system("pause"); 
	return 0;
}

