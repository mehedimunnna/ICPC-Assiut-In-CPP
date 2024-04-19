#include<iostream>
using namespace std;
int main()
{
    int a, b, c, result;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+'){
        result = a + b;
    }
    else if (s == '-'){
        result = a - b;
    }
    else if (s == '*'){
        result = a * b;
    }

    if(result == c){
        cout << "Yes" << endl;
    }
    else{
        cout << result << endl;
    }
    return 0;
}
