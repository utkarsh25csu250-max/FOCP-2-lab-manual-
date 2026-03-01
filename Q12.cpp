#include<iostream>
#include<math.h>
using namespace std;
int main(){
     double P, R, T, A, CI;

    cout<<"Enter Principal: ";
    cin>>P;

    cout<<"Enter Rate of Interest: ";
    cin>>R;

    cout<<"Enter Time (years): ";
    cin>>T;

    A = P * pow((1 + R/100), T);
    CI = A - P;

    cout<<"Compound Interest: "<<CI<<endl;
    cout<<"Maturity Amount: "<<A<<endl;

    return 0;
}