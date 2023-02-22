#include <iostream>
using namespace std;
// Arrays --> collections of items of similar or unsimilar types/items.

int main(){
    int marks[] = {66,67,68,69,90,91};
    int mathmarks[4];
    mathmarks[0]=1234;
    mathmarks[1]=4;
    mathmarks[2]=34;
    mathmarks[3]=234;

    //YOU CAN CHANGE THE VALUE OF EXISTING ARRAY AS WELL.
    mathmarks[2]=356;
    // cout<<"These are the math marks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // cout<<"These are the marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout<<marks[5]<<endl;

    // PRINTING ARRAY USING FOR LOOP
    // for (int i =0;i<4;i++)
    // {
    //     cout<<"The array values are "<<marks[i]<<endl;
    // }
    // return 0;


    // pointers and arrays
    int* p =marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[0] is "<<*(p+1)<<endl;
    cout<<"The value of marks[0] is "<<*(p+2)<<endl;
    cout<<"The value of marks[0] is "<<*(p+3)<<endl;
    cout<<"The value of marks[0] is "<<*(p+4)<<endl;

}