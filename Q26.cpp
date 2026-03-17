#include<iostream>
using namespace std;
int main(){
    int n=5,marks;
    int total=0;
    float percentage;
    for(int i=1;i<=n;i++){
        cout<<"enter marks:";
        cin>>marks;
        total+=marks;
    }
    cout<<"total marks:"<<total<<"\n";
    percentage=(total/500)*100;
    cout<<"percentage:"<<percentage;

    return 0;
}