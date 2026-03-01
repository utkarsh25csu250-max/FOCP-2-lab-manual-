#include<iostream>
using namespace std;
int main(){
    float P,R,T;
    cout<<"enter principal amt:";
    cin>>P;
    cout<<"enter intrest rate:";
    cin>>R;
    cout<<"enter time period:";
    cin>>T;
    float SI=(P*R*T)/100;
    cout<<"Simple interest:"<<SI;
    return 0;
}
