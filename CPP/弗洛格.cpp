#include<iostream>
using namespace std;
int main(){
	int  n,m=27;
	cin>>n;
	if(m-n<0){
		m=m+30;
		n=m-n;
	}else{
		n=m-n;
	}
	cout<<n;
}
