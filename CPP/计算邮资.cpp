#include<bits/stdc++.h>
using namespace std;
char c;
long long x,ans=0;
int main(){
    cin>>x>>c;
    if(x<1000){
        ans=8;
    }else{
        ans=8+(x-1000)/500*4;
        if((x-1000)%500>0){
            ans+=4;
        }
    }
    if(c=='y'){
        ans+=5;
    }
    cout<<ans;
    return 0;
}