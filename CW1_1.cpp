#include <iostream>
using namespace std;

int fact(int N)
{ 
	if (N == 0) 
		return 1; 
	else 
		return N * fact(N - 1); 
}

double sinX(int x)
{
	const double esp = 0.00001;
	double i = 1;
	double result = x;
	int n = 1;
	while ( i> esp)
	{
		result += ((pow((-1), n) * pow(x, (2 * n + 1))) / fact(2 * n + 1)) ;
		n += 1;
		i /= 10;
	}
	return result;
}


int main()
{
	int x;
	cout << "x = ";
	cin >> x;
	cout << "sin(x) = " << sinX(x) << endl;
	cout << "STANDART sin(x) = " << sin(x)<<endl;
	return 0;
}
