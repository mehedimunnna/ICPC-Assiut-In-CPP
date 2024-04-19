#include<iostream>
using namespace std;
int main()
{
    int n, n1, y, m, d;
    cin >> n;

    y = n / 365;
    m = (n % 365) / 30;

    n1 = n - (365 * y);
    d = n1 - (m * 30);

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;

    return 0;
}
