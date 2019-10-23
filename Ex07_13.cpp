#include <iostream>

using namespace std;

int main()
{
    int *integer=new int[20];//用new建立一个动态数组
    int m,a,i,j,t=0;
    for(i=0;i<20;i++)
    {
        cin>>m;
        for(j=0;j<=t;j++)
        {
            if(m==integer[j])//循环判定是否已经有相同值存在
                 a=1;
        }
        if(a==0||i==0)//如果不存在或者为第一个数把读取的数存入
        {
            integer[t]=m;
            t+=1;//扩充分配的内存
        }
        a=0;
    }
    for(i=0;i<t;i++)
    cout <<integer[i]<<" " ;
    delete [] integer;//释放多余的空间
    return 0;
}
