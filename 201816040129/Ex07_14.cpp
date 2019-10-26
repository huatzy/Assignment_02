#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    int i;
    vector<int>a(0);//定义vector的大小
    cout<<"Please Input the data:\n"<<endl;
    for(size_t i=0;i<20;++i)//循环
    {
        int x,v=0;
        cin>>x;//输入值符到x上
        for(size_t j=0;j<a.size();++j)//双重循环，看是否有相同的数字
        {
            if(x==a[j])//当此时输入的x与a[j]中的数相同
            {
                v=1;
                break;//跳出循环
            }
            else
                v=0;
        }
        if(v==0)
            a.push_back(x);//此时，x与目前a中的数字都不一样，则将x插入到a的末尾。
    }
    for(int c:a)
    {
        int  p=0;//定义一个数字p为0
        for(size_t j=0;j<a.size();++j)//为了验证数据是否为有效数字
        {
          if(a[j]<=100&&a[j]>=10)
          {
              p++;//得到一个有效数字时p加1，为了方便后面的输出
              if(p==a.size()-0)//假设所有的数据全为有效数字，则p的值应该为a.size()-20
                 {
                    cout<<c<<" ";//当p满足条件时，数据全为有效数字
                 }
          }
        }
    }
}
