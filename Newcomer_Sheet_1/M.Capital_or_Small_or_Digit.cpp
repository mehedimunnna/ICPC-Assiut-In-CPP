#include<iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;

    if(x>='0' && x<='9'){
        cout << "IS DIGIT" << endl;
    }
    else if(x>='A' && x<='Z'){
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }
    else{
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }
    return 0;
}
