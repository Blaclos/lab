#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		char ch(64 + i);
		for (int j = 0; j<i; j++)
			cout << ch;
		cout << endl;
	}

	return 0;

}