#include<bits/stdc++.h>
using namespace std;
int n,j[101],y[101],t[101],sum=0,jin=0,yin=0,tong=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>j[i]>>y[i]>>t[i];
        sum=sum+j[i]+y[i]+t[i];
        jin=jin+j[i];
        yin=yin+y[i];
        tong=tong+t[i];
    }
    cout<<jin<<" "<<yin<<" "<<tong<<" "<<sum;
    return 0;
}