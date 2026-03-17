#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"enter size of the array:";
    cin>>size;
    int arr[]={2,32,45,3,5,6,7,7,3,2};
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest value in array:"<<largest;
    
    return 0;

}