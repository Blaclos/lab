#include <iostream>
using namespace std;

int perevirka_parnist(int n) 
{
	if ((n / 2) * 2 == n)
		return 1;
	else
		return 0;
}

int dob(int n)
{
	int d = 1;
	while (n > 0)
	{
		d *= n % 10;
		n /= 10;
	}
	return d;
}

int sum(int n)
{
	int s = 0;
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	if (perevirka_parnist(n) == 1)
		cout << "Product = " << dob(n);
	else 
		cout << "Sum = " << sum(n);
	return 0;


	


}