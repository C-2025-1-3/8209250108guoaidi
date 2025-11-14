//#include<iostream>
//using namespace std;
//int main()
//{
//	Int(定义变量类型时大小写滥用//未声明的标识符) i（未声明的标识符） = k（使用未定义变量） + 1;
//	cout << i++ << endl;
//	int i = 1;（重复定义同一变量）
//	cout << i++ << endl;
//	cout << "Welcome to C++" << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{	
	int k = 0;
	int i = k+1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
//改正后效果如上；