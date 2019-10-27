#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
    int a,b=0,d=0,i,j,k,found=0;
    array<int,20>c;   //定义一个长度为20的数组
    for(size_t i=0;i<c.size();++i)
        c[i]=0;       //将数组所有值初始化为0
    for(j=1;j<=20;j++)
    {
        cin>>a;       //给a赋值；
        if(a>=10&&a<=100)   //判定是否为有效数字
       {  for(k=0;k<d;k++)  //与数组已有数值进行比较
            {   if(a==c[k])
                    b=1;    //是否重复的标志
            }
            if(b==0)    //若重复标志为0则赋予数组值
               {   c[d]=a;d++;   }
            else
            {   b=0;    }   //如果重复则不赋予数组数值
       }
        else
            continue;
    }
    for(i=0;i<c.size();i++)
    {
        if(c[i]!=0)
        cout<<c[i]<<" ";//输出数组中数
    }
    return 0;
}
