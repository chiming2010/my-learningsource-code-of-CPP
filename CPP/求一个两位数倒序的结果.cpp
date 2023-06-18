#include<iostream>
using namespace std;
int n,g,s;
int main(){
    cin>>n;
    g=n%10;
    s=n/10;
    if(n%10==0){
        cout<<s;
    }else{
        cout<<g<<s;
    }
    return 0;
}