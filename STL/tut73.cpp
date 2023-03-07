#include <iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Bharath"] = 90;
    marksMap["Ashok"] = 80;
    marksMap["mohan"] = 70;
    marksMap.insert({{"baadshah",65}});

    map<string, int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;   
    }
     
    return 0;
}