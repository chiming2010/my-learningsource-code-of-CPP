#include<iostream>
#include<cstring>
using namespace std;
char isbn[15],check;
int sum,ans=1;
int main(){
    cin >> isbn;
    for(int i = 0;i < strlen(isbn)-1;i++)
    {
        if(isbn[i]!='-'){
            sum += (isbn[i]-'0')*ans;
            ans++;
        }
    }
    sum%=11;
    if(sum==10)check='X';
    else check=sum+'0';
    if(check == isbn[12]){
        cout << "Right";
    }else{
        isbn[12]=check;
        cout << isbn;
    }
}

