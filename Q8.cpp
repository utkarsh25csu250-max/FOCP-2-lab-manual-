#include<iostream>
using  namespace std;
int main(){
    int N;
    cout<<"enter n:";
    cin>>N;
    for(int i=1;i<=N;i++){
        if(i%3==0){
            cout<<"buzz";
        }
    else if(i%5==0){
        cout<<"fuzz";
    }
    else if(i%3==0 && i%5==0){
        cout<<"fuzz & buzz";
        }
        else{
            cout<<i;
        }
        cout<<"\n";
}
return 0;
}