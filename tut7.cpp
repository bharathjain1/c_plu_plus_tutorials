#include <iostream>
using namespace std;

// Print global value in local function.

int c = 45;
int main(){
    // int a,b,c;
    // cout << "Enter the value a"<<endl;
    // cin >> a;
    // cout << "Enter the value b"<<endl;
    // cin >> b;
    // cout << "sum of a and b is "<<a+b<<endl;
    // cout <<"The global value of c is "<<::c<<endl; // This is how you assign global value in 
                                                   // in the local func.
    

    // ******************Float, double and long literals*********************************

    // float d=34.4F; // F is to indicate Float.
    // long double e=34.4L; // L is to indicate long double .
    // cout <<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout <<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout <<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout <<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout <<"The size of 34.4f is "<<sizeof(34.4f)<<endl;

    // *********************** Reference variables ****************************

    // float x = 566;   //This is reference varaible y refering x 
    // float & y = x;
    // cout <<x<<endl<<y<<endl;

    // **************************** Type cast ***************************
    
    int a = 67.90;
    cout<<" The value of a is "<<int(a)<<endl;



}
