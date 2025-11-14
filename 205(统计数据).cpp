#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
	int num1=0, num2=0, num3=0, num4=0;
	string b,s1;
	std::cout << "请输入一行文本（可包含空格）: ";
	std::getline(std::cin, s1);  // 使用 getline 读取整行，包括空格。 :contentReference[oaicite:0]{index=0}
	std::cout << "你输入的是: [" << s1 << "]\n";
	for(char c : s1)
	{
		unsigned char uch = static_cast<unsigned char>(c);
		if (std::isdigit(uch))
			num1++;
		else if (std::isalpha(uch))
			num2++;
		else if (std::isspace(uch))
			num3++;
		else
			num4++;
	}
	cout << "数字= " << num1 << endl;
	cout << "字母= " << num2 << endl;
	cout << "空格= " << num3 << endl;
	cout << "其他字符= " << num4 << endl;
	return 0;
}