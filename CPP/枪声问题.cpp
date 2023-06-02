#include<bits/stdc++.h>
using namespace std;
int n,t1,t2,p1=1,p2=1,cnt;
bool a[20001];
int main(){
	cin>>n>>t1>>t2;
	a[1]=true;
	for(int i=2;i<=n;i++){
		p1=p1+t1+1;
		a[p1]=true;
		p2=p2+t2+1;
		a[p2]=true;
	}
	for(int i=1;i<=max(p1,p2);i++){
		if(a[i]==true){
			cnt++;
		}
	}
	cout<<cnt;
}
