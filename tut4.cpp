#include <iostream>
using namespace std;
int global_var = 990;
void sum(){
    int a;
    std::cout <<global_var;
}

int main(){
    // int a = 4;
    // int b = 5;
    int global_var = 99;// local variable will be printed because local variable takes\
                        // the predence.
    int a = 40, b = 45;
    float pi = 3.15;
    char c = 'u'; // only single character not more than one
    bool is_true = false;
    // sum();
    cout<<global_var<<is_true;
    // std::cout<<"\nThe value of c is :"<<c;
    // std::cout<<"\nThis is the value of pi: "<<pi;
    // std::cout<<"This is the value of variable a. "<<a<<" This is the value of variable b. "<<b;
    return 0;
} 

// \n for new line is said to be escape sequence Character 