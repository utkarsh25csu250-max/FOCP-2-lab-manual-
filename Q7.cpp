#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float Hypo,base,height;
     cout<<"enter base:";
    cin>>base;
    cout<<"enter height";
    cin>>height;
    Hypo=sqrt(base*base+height*height);
    cout<<"Hypoteneus:"<<Hypo;
    return 0;

}