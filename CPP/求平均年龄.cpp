#include<bits/stdc++.h>
using namespace std;
long long n;
double ans=0;
int main(){
    cin>>n;
    int a[101];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        ans=ans+a[i];
    }
    cout<<fixed<<setprecision(2)<<ans/n;
    return 0;
}