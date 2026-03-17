#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin<<arr[i];
    }
    int count_3=0,count_5=0;
    for(int i=0;i<5;i++){
        if(arr[i]%3==0){
            count_3+=1;
        }
        else if(arr[i]%5==0){
            count_5+=1;
        }
    }
    return 0;
}