#include<bits/stdc++.h>
using namespace std;
int _gcd(int a,int b){
    return b==0?a:_gcd(b,a%b);
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int nn[n+1],mm[m+1],kk=m*n/_gcd(m,n);
    bool a[kk+1];
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++) cin>>nn[i];
    for(int i=1;i<=m;i++) cin>>mm[i];
    nn[0]=nn[n];
    mm[0]=mm[m];
    int s=0;
    for(int i=1;i<=kk;i++){
        if(mm[i%m]-nn[i%n]==1||mm[i%m]-nn[i%n]==-2){
            a[i]=1;
            s++;
        }
    }
    int ans=s*(k/kk),lef=k%kk;
    for(int i=1;i<=lef;i++){
        if(a[i]==1) ans++;
    }
    cout<<ans;
}
