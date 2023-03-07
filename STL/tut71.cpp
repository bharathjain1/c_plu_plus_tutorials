#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;

}

int main(){
    //vectors
    // int elem;
    // vector <int> vec1;
    // int size = 0;
    // cout<<"Enter the size of the vector"<<endl;
    // cin>>size;
    // //vector_syntax : VECTOR <DATATYPE> VARIABLE/IDENTIFIERS. 
    // for(int i=0;i<size;i++){
    //     cout<<"Enter the element"<<endl;
    //     cin>>elem;
    //     vec1.push_back(elem);
    // }
    // vec1.pop_back();
    // cout<<"This is the size of the vector"<<endl;
    // cout<<vec1.size()<<endl;
    // cout<<"These are the elements of the vector"<<endl;
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,900); // This is the way to insert element inside the vector array
    // vec1.insert(iter+1,6,600); // This gives you the copy of the elements.
    // Different types of intialiazation with vectors
    vector <int> vec1;  //Zero length integer vector.
    vector <char> vec2; //4 Element character vector.
    vector <char> vec3(vec2); 
    vector <int> vec4(6,4);
    display(vec4);
    return 0;
}