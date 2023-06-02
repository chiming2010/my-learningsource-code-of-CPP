#include<iostream>
using namespace std;
int main(){
	long long a,b;
	cin>>a;
	b=a;
	cout<<a<<"="; 
	for(long long i=2;i<=a;i+=1){
		while(b%i==0){
			b=b/i;
			if(b==1){
				cout<<i;
			}else{
				cout<<i<<"*";
			}
		}
	}
}

