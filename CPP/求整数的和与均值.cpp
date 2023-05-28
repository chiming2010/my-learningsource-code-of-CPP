#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int sum=0,a[10010];
	double ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum<<" ";
	ans=sum;
	cout<<fixed<<setprecision(5)<<ans/n<<endl;
	return 0;
}
