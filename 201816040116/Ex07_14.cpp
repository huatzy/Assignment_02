#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    vector<int>c;   //创建数组
    int a,d=0,i,j,k,b=0;
    for(j=1;j<=20;j++)
    {
        cin>>a;         //给a赋值
        if(a>=10&&a<=100)   //判定是否为有效数字
       {
            for(k=0;k<d;k++)  //与数组已有数值进行比较
            {
                if(a==c[k])
                    b=1;   //是否重复的标志
            }
            if(b==0)    //若不重复则赋予数组值
            {
                c.push_back(a);d++;
            }
            else
            {   b=0;   }   //如果重复则不赋予数组数值
       }
        else
            continue;
    }
    for(i=0;i<c.size();i++)
        cout<<c[i]<<" ";    //输出数组中数据
    return 0;
}
