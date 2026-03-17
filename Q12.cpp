#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter side1:";
    cin>>a;
    cout<<"enter side2:";
    cin>>b;
    cout<<"enter side3:";
    cin>>c;
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            cout<<"equilateral";
        }
        else if(a==b || a==c || b==c){
            cout<<"isosceles";
        }
        else{
            cout<<"scalene";
        }
    }
    else{
        cout<<"not a valid triangle";
    }
    return 0;
}