#include<iostream>
using namespace std;
int main() {
	char calculation;
	int num2,temp;
	cin >> temp;
	while(1)
	{
		cin >>calculation;
		cin >> num2;
		switch(calculation)
		{
			case('+'):
				temp = temp + num2;
				cout << temp << endl;
				continue;
			case('-'):
				temp = temp - num2;
				cout << temp << endl;
				continue;
			case('*'):
				temp = temp * num2;
				cout << temp << endl;
				continue;
			case('/'):
				temp = temp / num2;
				cout << temp << endl;
				continue;
			case('%'):
				temp = temp % num2;
				cout << temp << endl;
				continue;
			default:
				cout << "´íÎó" << endl;
				goto flag;
		} 
	}
	flag:
	return 0;
}