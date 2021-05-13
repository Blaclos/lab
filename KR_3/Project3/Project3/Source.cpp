#include <iostream>
using namespace std;
struct Triangle
{
    double x;
    double y;
    double z;

    Triangle(double a, double b, double c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }
    void print()
    {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }
    double height()
    {
        double h = height();
        h = sqrt(pow(x, 2) - (pow(z, 2) / 4));
        return h;
    }
};


int main()
{
    Triangle t(6, 6, 8);
    t.print();
    cout << "Height of an isosceles triangle:" << t.height() << endl;
}