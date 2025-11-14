#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
	long long space1,space2,a,i=1;
	cin >> a;
	space1 = a;
	if (a <= 0)
	{
		cout << "´íÎó";
		goto flag;
	}
	while (i)
	{
		space2 = (space1 + (a / space1)) / 2;
		if(abs(space2-space1)<0.00001)
		{
			i = 0;
		}
		else
			space1 = space2;
	}
	cout << space2 << endl;
	flag:
	return 0;

}