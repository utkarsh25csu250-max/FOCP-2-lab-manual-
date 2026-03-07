#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"enter letter:";
    cin>>letter;
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
    return 0;
}