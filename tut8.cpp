#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // constants in c++
    // const int a=67;
    // cout << "The value of a is "<<a<<endl;  
    // a = 78; This will give you an error because constants cannot be changed.

    // ******** manipulators ********
    int a=99,b=999,c=9999;
    cout<<"The value of a is :  "<<setw(4)<<a<<endl;
    cout<<"The value of b is :  "<<setw(4)<<b<<endl;
    cout<<"The value of c is :  "<<setw(4)<<c<<endl;
    return 0;
}
