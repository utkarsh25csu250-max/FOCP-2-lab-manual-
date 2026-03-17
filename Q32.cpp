#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int lagrest=INT_MIN,second=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]>lagrest){
            second=largest;
            lagrest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=lagrest){
            second=arr[i]l
        }
    }
    cout<<"largest:"<<lagrest<<"\n";
    cout<<"second largest:"<<second;
    return 0;
}
