#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter num1:";
    cin>>a;
    cout<<"enter num2:";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

     cout<<" num1:"<<a<<"\n";
    
    cout<<"enter num2:"<<b;
    
    return 0;
}