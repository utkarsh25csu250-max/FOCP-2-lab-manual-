#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter num1:";
    cin>>a;
    cout<<"enter num2:";
    cin>>b;
    temp=a;
    a=b;
    b=temp;

    cout<<"num1:"<<a<<"\n";
    cout<<"num2:"<<b;
    return 0;

}