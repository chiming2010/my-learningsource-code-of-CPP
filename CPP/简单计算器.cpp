#include<iostream>
using namespace std;
int a,b;
char c;
int main(){
    cin>>a>>b>>c;
    if(c=='+' || c=='-' || c=='*' || c=='/'){
        if(c=='+'){
            cout<<a+b;
        }else{
            if(c=='-'){
                cout<<a-b;
            }else{
                if(c=='*'){
                    cout<<a*b;
                }else{
                    if(c=='/'){
                        if(a==0 || b==0){
                            cout<<"Divided by zero!";
                        }else{
                            cout<<a/b;
                        }
                    }
                }
            }
        }
    }else{
        cout<<"Invalid operator!";
    }
    return 0;
}