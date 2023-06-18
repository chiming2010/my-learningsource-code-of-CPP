#include<iostream>
using namespace std;
int n,ans=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i+=2){
        ans+=i;
    }
    cout<<ans;
    return 0;
}