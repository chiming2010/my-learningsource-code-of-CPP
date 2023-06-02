#include<bits/stdc++.h>
using namespace std;
int m,n,sum=0;
int main(){
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(i%17==0){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}