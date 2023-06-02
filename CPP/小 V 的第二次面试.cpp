#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[10086],n;
	cin>>n;
	a[1]=15;
	a[2]=25;
	a[3]=30;
	for(int i=4;i<=n;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	cout<<a[n];
}
