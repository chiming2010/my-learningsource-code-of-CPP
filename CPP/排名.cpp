#include<bits/stdc++.h>
using namespace std;
int main(){
	long long ans=0,a[10086],n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(a[i]>a[k]){
			ans++;
		}
	}
	cout<<ans;
}
