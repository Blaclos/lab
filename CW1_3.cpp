#include <iostream>
using namespace std;

int el_i(int n, int i)
{
	if (n > i)
		return 0;
	n += 1;
	return n + el_i(n, i);
}

int main()
{
	int i, sum;
	cout << "i = ";
	cin >> i;
	sum = 0;
	for (int j = 1; j < i; j++)
	{
		cout << el_i(0, j) << endl;
		sum += el_i(0, j);
	}
	cout << "sum = " << sum;
	return 0;
}