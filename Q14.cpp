#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int choice;
    double num;

    cout<<"enter 1 for square"<<"\n";
    cout<<"enter 2 for cube"<<"\n";
    cout<<"enter 3 for squareroot"<<"\n";
    cout<<"enter choce:";
    cin>>choice;
    switch(choice){
        case '1':
        cout<<"enter num:";
        cin>>num;
        int square=num*num;
        cout<<"square:"<<square;
        break;

        case '2':
        cout<<"enter num:";
        cin>>num;
        int cube=num*num*num;
        cout<<"cube:"<<cube;
        break;

        case '3':
        cout<<"enter a num:";
        cin>>num;
        int sqr_root=sqrt(num);
        cout<<"sqrt:"<<sqr_root;    
        break;
        default:
        cout<<"not a valid choice";
    }
    return 0;
}