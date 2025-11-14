#include<iostream>
using namespace std;
int main()
{
	int c;
	double s1[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> s1[i];
	}
	while(1)
	{
		if (s1[0] + s1[1] <= s1[2] || s1[2] + s1[1] <= s1[0] || s1[0] + s1[2] <= s1[1])
		{
			cout << "错误";
			break;
		}
		else
		{
			if (s1[0] == s1[1] || s1[0] == s1[2] || s1[1] == s1[2])
				cout << "是等腰三角形";
			else
				cout << "不是等腰三角形";
			break;
		}
	}
	return 0;

}