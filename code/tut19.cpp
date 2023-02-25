#include <iostream>
using namespace std;

int volume(int a){
    // calculate volume of cube
    return a*a*a;
}

int volume(double r, int h){
    //calculate volume of cylinder
    return (3.14*r*r*h);
}

int main(){
    // method overloading---
    cout <<"volume of cube"<<volume(4)<<endl;
    cout <<"volume of cube"<<volume(12, 9)<<endl;
    return 0;
}