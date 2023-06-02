#include<iostream>
using namespace std;
long long x,g;
int main(){
    cin>>x>>g;
    if(x>=10){
        cout<<"1";
    }else{
        if(g>=20){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
    return 0;
}