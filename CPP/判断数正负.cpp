#include<iostream>
using namespace std;
int a;
int main(){
	cin>>a;
	if(a>0){
		cout<<"positive";
	}else{
		if(a==0){
			cout<<"zero";
		}else{
			cout<<"negative";
		}
	}
	return 0;
} 
