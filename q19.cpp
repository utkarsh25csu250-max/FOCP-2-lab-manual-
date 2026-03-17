#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"enter start and end:";
    cin>>start>>end;
    for(int n=start;n<=end;n++){
        if(n<=1){
            continue;
        }
        bool isprime=true;
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                isprime=false;
            }
        }
        if(isprime){
            cout<<n<<" ";
        }
    }
    return 0;
}