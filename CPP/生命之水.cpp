#include<bits/stdc++.h>
using namespace std;
int main(){
	double n=2.00,m=2.40,x;
	cin>>x;
	double a;
	a=n*40;
	if(x<40){
		x=x*n;
	}else{
		x=a+(x-40)*m;
	}
	cout <<fixed<<setprecision(2)<<x;
}
