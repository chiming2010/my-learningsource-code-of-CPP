#include<iostream>
using namespace std;
int maxx=0,n;
int main(){
    for(int i=1;i<=3;i++){
        cin>>n;
        if(maxx<n){
            maxx=n;
        }
    }
    cout<<maxx<<endl;
    return 0;
}