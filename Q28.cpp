#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int sum_even=0,sum_odd=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            sum_even+=arr[i];
        }
        else if(arr[i]%2==0){
            sum_odd+=arr[i];
        }
    }
    return 0;
}