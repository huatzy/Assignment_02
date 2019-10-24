#include <iostream>
#include<iomanip>
#include<array>
using namespace std;



int main()
{
    const int arraySize=20;
    array<int,arraySize>a={0};//定义并初始化array对象a
    int asize=0;//a的下标
    for(int i=0;i<arraySize;i++)
    {
        int x;
        cin>>x;//输入数据
        if(x<10||x>100)//判断数据是否有效
        {
            cout<<"非有效数据，错误"<<endl;//反馈
            break;
        }
        else
        {
        if(i==0)//第一个直接存入a
        {
            a[i]=x;
            asize++;
        }
        else
            {
    int flag=1;//用于判断是否重复
    for(int j=0;j<i;j++)
    {
        if(x==a[j])
        {
            flag=0;
            break;
        }
        else
            continue;
    }

    if(flag==1)
            {
                a[asize]=x;
                asize++;
            }
            else
                continue;
            }


}
    }
    for(int k=0;k<asize;++k)
        cout<<a[k]<<" ";//输出

    return 0;
}
