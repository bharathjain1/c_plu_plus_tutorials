#include <iostream>
using namespace std;

inline int product(int a,int b){
    /* This above inline function executes in the down line of main function 
        Where it is being called. */
    return a*b;
}

// Default Args
inline float multipliers(int a, int b=90){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter a and b : "<<endl;
    cin>>a;
    // cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The multiplier of a and b is"<<multipliers(a)<<endl;
    
    return 0;
}