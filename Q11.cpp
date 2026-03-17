#include<iostream>
using namespace std;
int main(){
    int order,price_order;
    float total,discount;
    cout<<"enter number of orders:";
    cin>>order;
    cout<<"price per order:";
    cin>>price_order;
    total=order*price_order;
    if(order>1000){
        discount=total*0.10;
        total=total-discount;
        cout<<"amt(10% disc):"<<total;
    }
    else{
        cout<<"amt:"<<total;
    }
    return 0;
}