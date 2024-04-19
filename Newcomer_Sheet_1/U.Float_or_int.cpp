#include<iostream>
using namespace std;
int main()
{
    double n;
    cin >> n;

    int n_integer = n;
    double result = n - n_integer;

    if(result != 0){
        cout << "float " << n_integer << " " << result << endl;
    }
    else{
        cout << "int " << n_integer <<endl;
    }
    return 0;
}
