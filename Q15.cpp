#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of device:";
    cin>>n;
    if(n%2==0){
        cout<<"no of devices are on are even";
    }
    else{
        cout<<"no of devices are on are off";
    }

    return 0;
}