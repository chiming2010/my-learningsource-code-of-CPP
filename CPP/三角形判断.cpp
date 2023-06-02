#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cin>>a>>b>>c;
    if((a+b)<c){
        cout<<"0";
    }else{
        if((b+c)<a){
            cout<<"0";
        }else{
            if((a+c)<b){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
    }
    return 0;
}