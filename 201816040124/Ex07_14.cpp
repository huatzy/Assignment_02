#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;



int main()
{
    const int arraySize=20;
    vector<int>a;//声明并初始化vector对象为空
    int mark=0;//判断是否输出对象的数据，存在非有效数据则不输出
    for(int i=0;i<arraySize;i++)
    {
        int x;
        cin>>x;//输入数据
        if(x<10||x>100)//判断数据是否有效
        {
            cout<<"非有效数据，错误"<<endl;//反馈
            mark=1;
            break;
        }
        else
        {
        if(i==0)//第一个直接存入a
        {
            a.push_back(x);
        }
        else
            {
    int flag=1;//用于判断是否重复
    for(int j=0;j<i;j++)
    {
        if(x==a[j])
        {
            flag=0;
            break;//存在重复则flag=0
        }
        else
            continue;
    }

    if(flag==1)
            {
                a.push_back(x);
            }
            else
                continue;
            }


}
    }
     if(mark==0)
     {
         for(int aa:a)
        cout<<aa<<" ";
     }

    return 0;
}//end
