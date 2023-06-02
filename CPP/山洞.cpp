#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,max=0;
	cin>>n;
	long long a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max<<endl;
	for(long long i=1;i<=n;i++){
		if(a[i]==max){
			cout<<i<<" ";
		}
	}
} 
