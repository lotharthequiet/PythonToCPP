#include <iostream>
using namespace std;


// outputs the value of a variable
// as well as the memory address in C++.
int main(){
    int varN = 101;
    cout << varN << endl;
    cout << &varN << endl; //outputs the memory address of variable varN
    return 0;
}
