#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter letter:";
    cin>>ch;
    if(ch>='0'&&ch<='9'){
        cout<<"number";
    }
    else if(ch>'a' && ch<'z' || ch>'A' && ch<'Z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
    }
    else{
        cout<<"special char";
    }
    return 0;
}