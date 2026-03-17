#include<iostream>
using namespace std;
int main(){
int item_no,quantity;
float unit_price=10,total_amt,discout,amt_topay;
cout<<"enter item_no:"<<"\n";
cin>>item_no;
cout<<"enter quantity:"<<"\n";
cin>>quantity;
total_amt=quantity*unit_price;
cout<<"total amount:"<<total_amt<<"\n";
discout=total_amt*0,20;
amt_topay=total_amt-discout;
cout<<"total amount(20% discount):"<<amt_topay;
return 0;
}