#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // cout << "This is tut 9"<<endl;

    int age;
    cout << "Please enter your age"<<endl;
    cin >>age;
    
    // SELECTION CONTROL STRUCTURES.

    // if (age<18){
    //     cout<<"Sorry sir you are not allowed for the party"<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"You will get a kids pass"<<endl;
    // }
    // else{
    //     cout<<"you are allowed for the party"<<endl;
    // }
    

    // USING SWITCH CASE 
    
    switch(age)
    {
        case 18:
            cout<<"You are 18";
            break;
        
        case 19:
            cout<<"You are 19";
            break;

        case 22:
            cout<<"You are 22";
            break;
        
        default:
            cout<<"No special cases";
            break;
            
    }

    return 0;
}
