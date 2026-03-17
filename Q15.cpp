#include<iostream>
using namespace std;
int main(){
    int n,num,max;
    cout<<"enter number of entries:";
    cin>>n;
    if(n<=0){
        cout<<"not valid";
    }
    cout<<"enter the first  number:";
    cin>>max;
    for(int i=2;i<=n;i++){
        cout<<"enter number"<<i<<":";
        cin>>num;

        if(num>max){
        max=num;
        }
    }
    cout<<"largest num:"<<max<<"\n";
}