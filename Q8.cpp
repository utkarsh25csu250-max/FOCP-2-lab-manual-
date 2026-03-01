#include<iostream>
using namespace std;
int main(){
    int item,quantity,unit_price;
    cout<<"enter item num:";
    cin>>item;
    cout<<"enter quantity num:";
    cin>>quantity;
    cout<<"enter unit_price";
    cin>>unit_price;
    float total_amt=quantity*unit_price;
    cout<<"TOTAL:"<<total_amt;
    cout<<"AFTER 20 discount";
    float dicount=total_amt*0.20;
    float total_amt_2=total_amt-dicount;
    cout<<"final amt:"<<total_amt_2;
    return 0;
}