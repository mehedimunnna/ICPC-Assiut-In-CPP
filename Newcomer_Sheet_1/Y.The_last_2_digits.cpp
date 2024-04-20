#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    int x, y;
    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    x = a * b * c * d;
    y = x % 100;

    if(y < 10){
        cout << 0 << y << endl;
    }
    else{
        cout << y << endl;
    }

    return 0;
}
