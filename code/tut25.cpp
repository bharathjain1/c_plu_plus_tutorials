#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(){
            salary = 122;
            cout<<"Enter employee id "<<endl;
            cin>>id;    
        }

        void getId(){
            cout<<"The value of ID is :"<<id<<endl;
        }
};

int main(){
    Employee harry, rohan, ajay;
    // harry.getId();
    // harry.setId();

    Employee fb[4];
    for (int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
    cout<<fb<<endl;
    return 0;
}