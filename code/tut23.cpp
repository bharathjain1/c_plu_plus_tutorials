#include <iostream>
using namespace std;

class Shop{
    int ItemId[40];
    int ItemPrice[40];
    int counter = 0;
    public:
        // void InitCounter(){counter=0;}
        void setPrice();
        void displayPrice();
};

void Shop :: setPrice(void){
    cout<<"Enter Id of item"<<endl;
    cin>>ItemId[counter];
    cout<<"Enter price of the id"<<endl;
    cin>>ItemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void){
    for (int i=0;i<counter;i++){
        cout<<"This is the item id : "<<ItemId[i]<<" and this is the price for that id : "<<ItemPrice[i]<<endl;
    }
}

int main(){
    Shop sp;
    // sp.InitCounter();
    sp.setPrice();
    // sp.setPrice();
    sp.displayPrice();
    return 0;
}