#include<iostream>
using namespace std;
long long a,n,sum=1;
int main(){
    cin>>a>>n;
    for(int i=1;i<=n;i++){
        sum=sum*a;
    }
    cout<<sum;
    return 0;
}