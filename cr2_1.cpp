#include<iostream>
using namespace std;


int* read_arr(int n)
{
	int* arr = new int[n];
    cout << "elements arr: " << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	return arr;
}

int* sort_arr(int* mas, int n)
{
    int tmp;
    int x = 0;
    for (int i = n - 1; i >= x; i--)
    {
        for (int j = n - 1; j >= x; j--) 
        {
            if (mas[j] < mas[j - 1]) 
            {
                tmp = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = tmp;
            }

        }
        x++;
    }
    return mas;
}

int* sum_mas(int* arr1, int* arr2, int n1, int n2)
{
    int* arr = new int [n1+n2];
	for (int i = 0; i < n1; i++)
		 arr[i]=arr1[i];
    for (int i = n1; i < n1+n2; i++)
        arr[i] = arr2[i-n1];
	return arr;
}


int main()
{
    int n1, n2;
    cout << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;
    int* arr1 = read_arr(n1);
    int* arr2 = read_arr(n2);
    arr1 = sort_arr(arr1, n1);
    arr2 = sort_arr(arr2, n2);
    int* arr = sum_mas(arr1, arr2, n1, n2);
    for (int i = 0; i < n1+n2; i++)
        cout << arr[i];
    delete[] arr;
    delete[] arr1;
    delete[] arr2;
}