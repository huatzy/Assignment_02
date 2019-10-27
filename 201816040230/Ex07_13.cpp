#include <iostream>
#include <array>
using namespace std;

int main()
{
    int num;//输入的数；
    array<int,20>a= {0};
    int x,i,j,z=0;
    for(i=0; i<20; i++)//将数存入array对象里面
    {
        int flag=0;
        cin>>num;
        for(int j=0; j<20; j++)
        {
            if(a[j]==num)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            a[z++]=num;
        }

    }
    for(int x=0; x<z; x++)//输出存入的数
    {
        cout<<a[x]<<' ';
    }
    return 0;
}
