#include <iostream>
using namespace std;
int main(){
    int order,total,discount,after_amt;
    cout<<"enter order item no.:";
    cin>>order;
    cout<<"enter amount:";
    cin>>total;
    if(order>>1000){
        discount=total*0.10;
        after_amt=order-discount;
        cout<<"amt:"<<after_amt;
    }
    else{
        cout<<"total amt:";
    }
    return 0;
}