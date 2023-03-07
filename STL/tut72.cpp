#include <iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){

    // LIST : lists are here nothing but a linked list.
    list<int> list1; //  Empty list intialised
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    // display list
    display(list1);
    // Enter elements into list using operator and dereferencer
    list<int> list2(3); // List with 3 spaces but empty values.
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 12;
    iter++;
    *iter = 13;
    iter++;
    *iter = 11;
    // cout<<"Displaying list 2."<<endl;
    // display(list2);
    list1.pop_back();
    list1.pop_front();
    display(list1);
    return 0;
}