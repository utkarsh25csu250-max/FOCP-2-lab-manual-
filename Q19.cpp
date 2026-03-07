#include<iostream>
using namespace std;
int main(){
    int age;
    char nationality;
    cout<<"enter age:";
    cin>>age;
    cout<<"enter nationality";
    cin>>nationality;
     if(age>=18 && (nationality=='I'|| nationality=='i')){
        cout<<"eligible to vote";
     }
     else{
        cout<<"not eligible to vote";
     }
     return 0;
}