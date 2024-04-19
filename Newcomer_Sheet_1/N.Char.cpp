#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if(ch>='a' && ch<='z')
        ch -= 32;
    else
        ch += 32;
    cout << ch << endl;

    return 0;
}
