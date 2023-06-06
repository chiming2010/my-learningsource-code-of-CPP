#include<iostream>
using namespace std;
int k,one=0,five=0,ten=0,j=0;
int main(){
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>j;
        if(j==1) one++;
        if(j==10) ten++;
        if(j==5) five++;
    }
    cout<<one<<endl
        <<five<<endl
        <<ten<<endl;
    return 0;
}