#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int i,n,j;
    cin>>n;
    for(i=1;i<=n;i++){
        a[i][1]=1;
        a[i][i]=1;
    }
    for(i=3;i<=n;i++){
        for(j=2;j<=n;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]!=0){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// Path: 杨辉三角.cpp