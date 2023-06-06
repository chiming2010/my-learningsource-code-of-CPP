#include<bits/stdc++.h>
using namespace std;
double x,n;
int main(){
    cin>>x>>n;
    for(int i=1;i<=n;i++) x=x+x*0.001;
    cout<<fixed<<setprecision(4)<<x;
    return 0;
}