#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        // Below friend functions means it is allowed to access my private members.
        friend Complex sumComplex(Complex o1, Complex o2);
        void printnumber(){
            cout<<"Your number "<<a<<" + "<<b<<"i"<<endl;
        }

};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    // Friend functions
    Complex c1,c2, sum;
    c1.setNumber(12,14);
    c1.printnumber();
    c2.setNumber(11, 13);
    c2.printnumber();
    sum = sumComplex(c1,c2);
    sum.printnumber();
    return 0;
}