#include <iostream>
using namespace std;

// Function proto-typing
// Type function-name (arguments);
int sum(int a,int b); // -> Acceptable
int sum(int,int); // -> Acceptable
void g();
int main(){
    // FUNCTION AND FUNCTION PROTOTYPING.
    int a,b;
    cout<<"Enter the first number "<<endl;
    cin >> a; 
    cout<<"Enter the second number "<<endl;
    cin >> b;
    // a and b are actual params
    cout<<"The sum of a and b is "<<sum(a,b)<<endl;
    g();
    return 0;
}

int sum(int a,int b)
{
    // a and b are formal params which will be taking values from actual params.
    return a+b;
}

void g()
{
    cout <<"Hello good day man !"<<endl;
}