#include<bits/stdc++.h>
using namespace std;
int n,ans=0,sum=0;
long double a[1001],s=0;
int main(){
    cin>>n;
    a[1]=210;
    a[2]=190;
    for(int i=3;i<=n;i++){
        s=a[i-1]+a[i-2];
        a[i]=s/2;
        sum++;
    }
    cout<<fixed<<setprecision(0)<<a[sum];
    return 0;
}