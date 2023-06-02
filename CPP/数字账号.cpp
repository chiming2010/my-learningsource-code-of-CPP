#include<iostream>
using namespace std;
int n,k,a[105][25],c[105];
int main(){
    cin>>n>>k;a[1][1]=c[1]=a[2][1]=c[2]=1;
    for(int i=3;i<=n;i++){c[i]=c[i-1];
    	for(int j=1;j<=c[i];j++){
    		a[i][j]+=a[i-1][j]+a[i-2][j];
    		if(a[i][j]>9)a[i][j]-=10,a[i][j+1]++;
		}if(a[i][c[i]+1])c[i]++;
	}for(int i=1,j=k;i<=n;i++){
		for(int x=c[j];x>0;x--)cout<<a[j][x];
		c[j]=0;if(i!=n)for(int x=1;x<=k;j=(j+1>n?1:j+1))if(c[j])x++;j=(j-1<1?n:j-1);
	}return 0;
}

