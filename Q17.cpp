#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0;
    int temp,remainder,result=0,digits=0;
    cout<<"1->perfect num"<<"\n";
    cout<<"2->armstrong num"<<"\n";
    int choice;
    cout<<"enter choice:";
    cin>>choice;
    switch(choice){
        case 1:
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"perfect num";
     }
     else{
        cout<<"non- perfect";
     }
     break;
     return 0;

     case 2:
     cout<<"enter n:";
     cin>>n;
     temp=n;
     while(temp!=0){
        temp/=10;
        digits++;
     }
     temp=n;

     while(temp!=0){
        remainder=temp%10;
        result+=pow(remainder,digits);
        temp/=10;
     }
     if(result==n){
        cout<<"armstrong ";
     }
     else{
        cout<<"not a armstrong";
     }
     break;
     return 0;
     defualt:
     cout<<"not a valid choice";
    }
}