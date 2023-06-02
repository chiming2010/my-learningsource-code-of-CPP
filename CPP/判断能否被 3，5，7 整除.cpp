#include<iostream>
using namespace std;
int x;
bool t;
int main(){
    cin>>x;
    if(x%3==0){
        cout<<"3 ";
        t=true;
    }
    if(x%5==0){
        cout<<"5 ";
        t=true;
    }
    if(x%7==0){
        cout<<"7";
        t=true;
    }
    if(t==false){
        cout<<"n";
    }
    return 0;
}
