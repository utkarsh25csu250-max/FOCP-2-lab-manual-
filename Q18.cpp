#include<iostream>
using namespace std;
int main(){
    int n,orignal,remainder,reverse=0;
    cout<<"enter num:";
    cin>>n;
    orignal=n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    if(orignal==reverse){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palnindrome";
    }
    return 0;
}