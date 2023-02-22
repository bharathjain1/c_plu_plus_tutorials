#include <iostream>
using namespace std;

//Call by value copy the values
void add(int a, int b){
    int c;
    c = a + b;
    cout<<c<<endl;
}

// Call by reference change the value of the real variable
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 90;
    int b = 80;
    swap(&a, &b);
    add(a,b);
    cout<<"a is "<<a<<" "<<"b is  "<<b<<endl;
    return 0;
}