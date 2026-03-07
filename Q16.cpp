#include<iostream>
using namespace std;
int main(){
    int order;
    cout<<"enter order size:";
    cin>>order;

    if(order%3==0){
        cout<<"order no. is divisible by 3";
    }
    else if(order%5==0){
        cout<<"order no. is divisible by 5";
    }
    else{
        cout<<"order is not divided by 3 nor 5";
    }
    return 0;
}