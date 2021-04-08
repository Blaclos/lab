#include <iostream>
using namespace std;

void deleteMatrix(int** matrix, int n)
{
    for (int i = 0; i < n; i++)
        delete[] matrix[i];

    delete[] matrix;
}

int** createMatrix(int n, int m)
{
    int** matrix;

    matrix = new int* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];

    return matrix;
}

int** inputMatrix(int n, int m)
{
    int** matrix = createMatrix(n, m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cout << "Element [" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }

    return matrix;
}

void printMatrix(int** matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void Matrices90(int** matrix, int n, int m)
{
    for (int j = 0; j < m; j++) 
    {
        for (int i = n - 1; i >= 0; i--)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}


void test()
{
    int n;
    cout << "n = ";
    cin >> n;
    int** matrix = inputMatrix(n, n);
    printMatrix(matrix, n, n);
    cout << endl;
    Matrices90(matrix, n, n);
}

int main()
{

    test();
}