#include<bits/stdc++.h>
using namespace std;
int maxx=0,n,a[101];
int main(){
    cin>>n;
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>maxx){
            maxx=a[i];
        }
    }
    cout<<maxx;
    return 0;
}