#include<iostream>
using namespace std;
bool a[10001];
int l,m,b,c,d=0;
int main(){
    cin>>l>>m;
    for(int i=1;i<=m;i++){
        cin>>b>>c;
        for(int r=b;r<=c;r++){
            a[r]=true;
        }
    }
    for(int i=0;i<=l;i++){
        if(a[i]==false){
            d++;
        }
    }
    cout<<d;
}

