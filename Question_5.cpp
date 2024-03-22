#include<iostream>
using namespace std ;
int main (){
    char x,y;
    cout<<"First Character:";
    cin>>x;
    cout<<"Second Character:";
    cin>>y;
    int z=(int)x - (int)y ;
    if(z>0){
        cout<<z;
    }
    else{
        cout<<-1*z;
    }
    return 0;
}