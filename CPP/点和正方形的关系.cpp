#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    cin>>x>>y;
    x=abs(x);
    y=abs(y);
    if(x<=1 && y<=1){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}