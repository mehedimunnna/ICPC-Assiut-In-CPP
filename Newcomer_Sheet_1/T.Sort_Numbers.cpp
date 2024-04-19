#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    int temp;
    cin >> a >> b >> c;
    int given_a = a;
    int given_b = b;
    int given_c = c;

    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }

    cout << a << endl<< b << endl<< c << endl<< endl;
    cout << given_a << endl<< given_b << endl<< given_c << endl;
    return 0;
}
