#include <iostream>
using namespace std;

// struct
//    struct emp
//     {
//         int empid;
//         char favchar;
//         float salary;
//     };

//    union money
//     {
//         /* data */
//         int rice;   // only one can be used among all
//         char car;
//         float pounds;
//     };

int main(){
    // STRUCTS UNIONS AND ENUMNS

    // struct emp harry;   // --> We can make multiple emps 
    // harry.empid = 123;
    // harry.favchar = 'c';
    // harry.salary = 1200;
    // cout<<harry.salary<<endl;
    // cout<<harry.favchar<<endl;
    // cout<<harry.empid<<endl;

    // union money m1;
    // m1.rice = 90;
    // m1.car = 'c';
    // cout << m1.rice <<endl;
    // cout << m1.car <<endl;

    //ENUMS
    enum meal{breakfast,lunch,dinner};
    meal m1 = lunch;
    cout<<m1;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

 
    
    return 0;
}