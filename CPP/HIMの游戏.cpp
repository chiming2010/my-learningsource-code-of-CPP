#include<iostream>
using namespace std;
int main(){
	int n,m,c,b,a[100];
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		cin>>c>>b;
		a[i]=m+c-b;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
}

