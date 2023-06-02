#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int k=0;
    if(a<60) k++;
    if(b<60) k++;
    if(c<60) k++;
    if(k==1) cout<<'1'<<endl;
    else cout<<'0'<<endl;
    return 0;
}
