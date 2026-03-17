#include<iostream>
using namespace std;
int main(){
    int score1,score2,score3;
    cout<<"enter score of player 1:";
    cin>>score1;
    cout<<"enter score of player 2:";
    cin>>score2;
    cout<<"enter score of player 3:";
    cin>>score3;

    if(score1>score2 && score1>score3){
        cout<<"player 1 is the winner";
    }
    else if(score2>score1 && score2>score3){
        cout<<"player 2 is the winner";
    }
    else if(score3>score1 && score3>score2){
        cout<<"player 3 is the winner";
    }
    else{
        cout<<"its a tie";
    }
    return 0;
}