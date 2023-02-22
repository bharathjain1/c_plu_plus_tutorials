// POINTERS
#include <iostream>
using namespace std;
int main(){

    //POINTERS

    int a = 12;
    int* b = &a;
    cout<<"This is the address of b"<<&a<<endl; 
    cout<<"This is the value of b is "<<b<<endl;

    // POINTERS TO POINTERS
    
    int** c = &b;
    cout <<"The value of b is "<<&b<<*c<<endl;

    return 0;
}