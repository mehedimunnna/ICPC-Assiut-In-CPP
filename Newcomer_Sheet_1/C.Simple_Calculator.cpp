#include<iostream>
using namespace std;
int main()
{
    long long x, y, sum, sub, mul;
    cin >> x >> y;

    sum = x + y;
    mul = x * y;
    sub = x - y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << sub << endl;

    return 0;
}
