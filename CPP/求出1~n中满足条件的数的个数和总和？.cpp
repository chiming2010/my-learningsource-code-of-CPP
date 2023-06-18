#include<bits/stdc++.h>
using namespace std;
int n,answer=0,cnt=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0 && i%3!=0){
            answer+=i;
            cnt++;
        }
    }
    cout<<cnt
        <<endl
        <<answer;
    return 0;
}