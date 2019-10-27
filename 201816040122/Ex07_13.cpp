#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    int a=0,flag;
    double x;
    array<double,20>n{}; //建立长度为20的一维array,type为double，并且初始化
    cout<<"请输入20个10~100的数值（包括10和100）"<<endl;
    for(int i=0;i<20;++i) //将20个数值输入
    {
    cin>>x;
    flag=0;          //flag用于将判断array里面是否有重复
    if(x>=10&&x<=100)
    {
     for(int j=0;j<=a;j++)
     {
         if(n[j]==x)
            flag=1;
     }
     if(flag==0)      //如果flag=0，则无内鬼，交易继续。
        {n[a]=x;}
     a=a+1;
     flag=0;
    }
    }
    cout<<"您输出的数值为"<<endl;
    for(int i=0;i<20;i++)
    {
        if(n[i]!=0)               //输出不为0的n[i]
        cout<<n[i]<<' ';
    }

}
