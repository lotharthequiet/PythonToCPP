#include <iostream>
#include <string>
using namespace std;

// Demonstrates how chars and strings can not be
// directly compared.
int main(){

    string strvar = "b";
    char charvar = 'b';

    cout << ('b' == charvar) << endl;
    cout << ("b" == strvar) << endl;
    //cout << ('a' == "a") << endl; // will error!

    return 0;
}
