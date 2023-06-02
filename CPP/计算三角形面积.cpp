#include<bits/stdc++.h>
using namespace std;
double a,b,c,d,e,f,p,g,h,i,s;
int main(){
	cin>>a>>b>>c>>d>>e>>f; 
	g=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	h=sqrt((e-a)*(e-a)+(f-b)*(f-b));
	i=sqrt((e-c)*(e-c)+(f-d)*(f-d));
	p=(g+h+i)/2;
	s=sqrt(p*(p-g)*(p-h)*(p-i));
	printf("%.2lf",s);
}
