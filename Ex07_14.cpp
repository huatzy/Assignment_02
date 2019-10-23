#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,m;//i用于循环，m作为读取变量
    int a=0;
    vector<int> integer(1);//分配一个内存为一的vector数组
    cin>>m;
    integer[0]=m;//读取输入的第一个数存入
    for(i=0;i<19;i++)
    {
        cin>>m;
        for(size_t j=0;j<integer.size();j++)//循环判定是否已经有相同值存在
        {
            if(m==integer[j])
                 a=1;
        }
        if(a==0)//如果不存在把读取的数存入
        {
            integer.push_back(m);//插入尾部扩大储存空间
        }
        a=0;
    }
    for(size_t i=0;i<integer.size();i++)
    cout <<integer[i]<<" " ;
    return 0;
}
