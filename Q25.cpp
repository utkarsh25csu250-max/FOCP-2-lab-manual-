#include<iostream>
#include<string>
using namespace std;
int main(){
    string password;
    cout<<"enter password:";
    cin>>password
    bool hasupper=false,haslower=false,hasdigit=false,hassymbol=false;
    for(int i=0;i<password.length();i++){
        char ch=password[i];
        if(ch>'A'&& ch<'Z'){
            hasupper=true;
        }
        else if(ch>'a'&&ch<'z'){
            haslower=true;
        }
        else if(ch>'0'&& ch<'9'){
            hasdigit=true;
        }
        else if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='&'||ch=='*'){
            hassymbol=true;
        }
    }
    if(hasupper,haslower,hasdigit,hassymbol){
        cout<<"strong pass";
    }
    else{
        cout<<"weak pass";
    }
    return 0;
}