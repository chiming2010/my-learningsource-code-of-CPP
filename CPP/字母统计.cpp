#include<iostream>//祖传的开头
using namespace std;
int main(){
    char a;//也可以用数组，不过我觉得麻烦
    int cnt=0;//再定义一个，用来计数
    while(cin.get(a)){//这里的cin.get(a)也可以写成cin>>a
        if(a=='#')break;//判断是否结束
        if(a=='b'||a=='B'||a=='M'||a=='m')cnt++;//判断是否计数器加1
    }
    cout<<cnt;//输出计数器
    return 0;//哇塞的结尾
}
