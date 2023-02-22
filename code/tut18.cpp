#include <iostream>
using namespace std;

int fact(int val){
    if (val<2){
        return 1;
        }
    return val*fact(val-1);
}
int main(){
    // This is mainly recursive functions and recursion functions.
    int val;
    cin>> val;
    int k = fact(val);
    cout<<k<<endl;
    return 0;
}