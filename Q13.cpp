#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    double D=b*b - 4*a*c;
    if(D>0){
        double root1=(-b+sqrt(D))/(2*a);
        double root2=(-b-sqrt(D))/(2*a);
        cout<<"roots are real and distinct"<<"\n";
        cout<<"root1:"<<root1<<"\n";
        cout<<"root 2:"<<root2<<"\n";
    }
    else if(D==0){
        double root= -b/(2*a);
        cout<<"the roots are real and equal"<<"\n";
        cout<<"root:"<<root<<"\n";
    }
    else{
        double realroot= -b/(2*a);
        double imgroot= sqrt(-D)/(2*a);
        cout<<"roots are real and img"<<"\n";
        cout<<"root1:"<<realroot<<"\n";
        cout<<"root2:"<<imgroot<<"\n";
}
return 0;
}