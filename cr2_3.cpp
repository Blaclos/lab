#include <iostream>
using namespace std;

int* read_arr(int n)
{
	int* arr = new int[n];
	cout << "elements arr: " << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	return arr;
}

int* arr_new(int* arr1, int j, int k)
{
	int* arr = new int[k];
	for (int i = 0; i < k; i++)
		arr[i] = arr1[i+j];
	return arr;
}


void test()
{
	int n,m;
	int k = 0;
	int maxk = 0;
	int j = 0;
	cout << "n = ";
	cin >> n;
	int* arr = read_arr(n);
	for (int i = 0; i < n; i++)
	{
		if (i != n)
		{
			if (arr[i] != arr[i + 1])
			{
				k++;
			}
			if (arr[i] == arr[i + 1] || i+1 == n)
			{
				if (maxk < k)
				{
					maxk = k;
					j = i-k+1;
					k = 1;
				}
			}
		}
	}

	cout << j << endl << maxk << endl;
	int* arr2 = arr_new(arr, j, maxk);
	for (int i = 0; i < maxk; i++)
		cout << arr2[i];
}


int main()
{
	test();
}