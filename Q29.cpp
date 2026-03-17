#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[30];
    for(int i=0;i<30;i++){
        cin>>arr[i];
    }
    int minimum=INT_MAX;
    for(int i=0;i<30;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    cout<<"minimum temp in last 30 days:"<<minimum;
    return 0;
}