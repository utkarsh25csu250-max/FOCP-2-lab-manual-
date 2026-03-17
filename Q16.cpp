#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    if(n<=1){
        cout<<"non prime";
        return 0;
    }
    bool isPrime=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime==true){
        cout<<"prime num";
    }
    else{
        cout<<"non-prime";
    }
}