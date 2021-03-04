#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	for (int i = 2; i < a; i++)
	{
		if ((a == (a / i) * i) and (b == (b / i) * i))
		{
			cout << i;
			break;
		}
	}

}