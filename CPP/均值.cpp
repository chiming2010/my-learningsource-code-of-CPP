#include<bits/stdc++.h>
using namespace std;
int n;
double a[101],ans=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        ans=ans+a[i];
    }
    cout<<fixed<<setprecision(4)<<ans/n;
    return 0;
}