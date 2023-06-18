#include<iostream>
using namespace std;
long long n,ans=1;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) ans=ans*i;
    cout<<ans;
    return 0;
}