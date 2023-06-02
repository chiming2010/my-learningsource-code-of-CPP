#include<bits/stdc++.h>
using namespace std;
int n,m,i,cnt,total;
bool a[1001];
int main()
{
    memset(a,true,sizeof(a));
    cin>>n>>m;
    total=n;
    while(total>0)
    {
        i++;
        if(i>n)i=1;
        if(a[i]==true)
        {
            cnt++;
            if(cnt==m)
            {
                a[i]=false;
                total--;
                cnt=0;
            }
        }
    }
    cout<<i;
    return 0;
}


