#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    //求a的最大公因数
    int g=a[1];
    for(int i=2;i<=n;i++) g=__gcd(g,a[i]);
    cout<<g;
    return 0;
}