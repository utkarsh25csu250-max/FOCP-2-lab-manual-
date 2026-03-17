#include<iostream>
using namespace std;
int main(){
    int num_employe,basic_salary;
    float bonus,net_salary;
    cout<<"enter number of employees:";
    cin>>num_employe;
    cout<<"enter salary per employee:";
    cin>>basic_salary;
    bonus=basic_salary*0.12;
    cout<<"bonus/employee:"<<bonus<<"\n";
    net_salary=num_employe*basic_salary;
    cout<<"net salary:"<<net_salary<<"\n";
    return 0;
}