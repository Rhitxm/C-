//making a shop counter information using OMA and arrays in classes

#include <iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void intCounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
};
void Shop::setPrice(void){
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    Shop dukaan;
    dukaan.intCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
