#include <iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c; // Can be only accessed by functions only within class
                   // or functions only outside class burt with class functions
    public:             

    public:
        int d,e;  
        void setData(int a1,int b1,int c1){
            a = a1;
            b = b1;
            c = c1;
        } // Declaration function
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

// void Employee :: setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }
int main(){
    // classes, public, private access modifiers.
    Employee harry;
    harry.d = 90;
    harry.e = 89;
    // harry.a = 99; // Inaccessible because a is private data.
    harry.setData(1,2,3);
    harry.getData();
    return 0;
}