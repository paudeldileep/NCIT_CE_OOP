//soccer player point comparison

#include<iostream>
#include<string.h>
using namespace std;

class SoccerPlayer{
    char name[20];
    int goals,jerseyNo,assists;
    public:
        SoccerPlayer(){
            strcpy(name,"");
            goals=0;
            jerseyNo=0;
            assists=0;
        }
        SoccerPlayer(char *n,int g,int j,int a){
            strcpy(name,n);
            goals=g;
            jerseyNo=j;
            assists=a;
        }
        void display(){
            cout<<"Name="<<name<<endl;
            cout<<"Goals="<<goals<<endl;
            cout<<"JerseyNo="<<jerseyNo<<endl;
            cout<<"Assists="<<assists<<endl;
        }
        friend int operator>(SoccerPlayer,SoccerPlayer);
};
int operator>(SoccerPlayer S1,SoccerPlayer S2){
    int points1=S1.goals+S1.assists;
    int points2=S2.goals+S2.assists;
    if(points1>points2)
        return 1;
    else if(points1<points2)
        return 0;
    else
        return -1;
}

int main(){
    SoccerPlayer *S[5];
    for(int i=0;i<5;i++){
        char name[20];
        int goals,jerseyNo,assists;
        cout<<"Enter name,goals,jerseyNo,assists of player "<<i+1<<endl;
        cin>>name>>goals>>jerseyNo>>assists;
        S[i]=new SoccerPlayer(name,goals,jerseyNo,assists);
    }
    for(int i=0;i<5;i++){
        S[i]->display();
    }
    int max=0;
    for(int i=0;i<5;i++){
        if(*S[i]>*S[max])
            max=i;
    }
    cout<<"Maximum points scored by "<<endl;
    S[max]->display();
    return 0;
}
    