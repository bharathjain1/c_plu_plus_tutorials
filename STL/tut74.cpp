#include <iostream>
#include <algorithm>  

using namespace std;
int main(){
    // Functors as functions object .
    // A fucntion wrapped in a class so that it is available as an object. 
    int arr[] = {11,8,9,3,4,1,2,6};
    sort(arr,arr+8,greater<int>());
    for (int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}