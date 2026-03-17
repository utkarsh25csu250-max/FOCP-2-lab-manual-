#include<iostream>
using namespace std;
int main(){
    int employe[10];
    for(int i=0;i<10;i++){
        cout<<"enter salary of"<<i+1<< "employee:";
        cin<<employe[i];
    }
    int total_sal=0
    for(int i=0;i<10;i++){
        total_sal+=employe[i];
    }
    cout<<"total salary:"<<total_sal<<"\n";
    int avg_sal=total_sal/10;
    cout<<"avg salary:"<<avg_sal;
    return 0;
}