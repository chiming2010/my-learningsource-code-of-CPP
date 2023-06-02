#include <iostream> 
using namespace std;
int main(){
	long long n,a,b;
	cin>>n>>a>>b;
	long long s[n+1];
	s[0]=0;
	for (long long i=1;i<=n;i++) {
		if (i-b<=0) s[i]=s[i-1]+i;
		else s[i]=s[i-1]+s[i-b]+i;
		cout<<s[i]<<" "; 
	}
	return 0;
}

