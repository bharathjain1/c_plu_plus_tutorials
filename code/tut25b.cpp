#include <iostream>
using namespace std;

class Complex{
    int a;
    int b;
    void setdata(int v1, int v2){
        a = v1;
        b = v2;

    }

    void setDatabySum(complex o1, complex o2){
        a = o1.a +o2.a;
        b = o1.b +o2.b;
    }
};

int main(){
    
    return 0;
}