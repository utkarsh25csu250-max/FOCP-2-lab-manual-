#include<iostream>
using namespace std;
int main(){
    int employe,basic_salary;
     cout<<"enter employee num:";
    cin>>employe;
    cout<<"enter salary /employee:";
    cin>>basic_salary;

    float bonus=basic_salary*0.12;
    float net_salary=employe*basic_salary;
    
    cout<<"bonus /employee:"<<bonus<<"\n";
    cout<<"net_salary:"<<net_salary;
    return 0;
}