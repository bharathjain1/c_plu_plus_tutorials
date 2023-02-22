#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=5, b=7;
    cout << "Operators in C++"<<endl;
    cout << "Following operators are present in C++"<<endl;
    //Arithmetic operators
    cout<<"This valus a+b is "<<a+b<<endl;
    cout<<"This valus a-b is "<<abs(a-b)<<endl;
    cout<<"This valus a*b is "<<a*b<<endl;
    cout<<"This valus a/b is "<<a/b<<endl;
    cout<<"This valus ++b is "<<++b<<endl;
    cout<<"This valus b++ is "<<b++<<endl;
    cout<<"This valus b-- is "<<b--<<endl;
    cout<<"This valus --b is "<<--b<<endl;

    //Assignment Operators -- > used to assign values to variables
    // int a=6, b=9;
    // char d = 'd';

    //Comparision operators 
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;

    //logical operators
    // &&  -> logical and operator 
    // ||  -> logical or operator 
    // !  -> logical not operator 

    return 0;
}
