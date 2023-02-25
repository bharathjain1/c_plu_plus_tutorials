#include <iostream>
using namespace std;

class Binary
{
    string s; // By default member is private.

public:
    void read();
    void chk_bin();
    void Ones();
    void display();
};

void Binary::read(){
    cout << "Enter a binary number"<<endl;
    cin  >> s;
}

void Binary::chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}

void Binary :: Ones()
{
    chk_bin();  // This is nesting function
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else if (s.at(i)=='1')
        {
            s.at(i)='0';
        } 
    }
}

void Binary :: display(){
    cout<<"The binary numbers after change are : "<<s<<endl;
}


int main()
{
    // Nesting of member functions.
    Binary b;
    b.read();
    // b.chk_bin();
    b.Ones();
    b.display();
    return 0;
}


// GLANCE AT CLASSES IN C++
// Classes and objects-- OOPS.
// Class is extensions of structures.
// Structures had limitations
// 1. Members are public
// 2. Methods cannot be added as well.
// Class = Structures and more
// Classes can have methods and properties
// Classes can have members private and public
// You can declare objects along with the class declaration.
/* class Employee{
//     // Statememts
 } E1, E2, E3, E4
*/
//    e1.salary = 8 makes no sense if salary is a private member.