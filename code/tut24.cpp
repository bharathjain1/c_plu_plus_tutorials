#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
        }

        void getData(void){
            cout<<"The id of the user is : "<<id<<" And this is the count of employee "<<count<<endl;
            count++;
        }

        static void getcount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};

int Employee::count; // Default variable is 0 and referenced here 

int main(){

    Employee ep, ep1, ep2;
    ep.setData();
    ep.getData();
    ep.getcount();
    
    ep1.setData();
    ep1.getData();
    ep.getcount();
    
    ep2.setData();
    ep2.getData();
    ep.getcount();
    return 0;
}