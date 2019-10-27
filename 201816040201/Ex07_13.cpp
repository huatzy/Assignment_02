#include <iostream>
#include<array>
using namespace std;
int main()
{

	array< int, 20> a1;
	int cnt=0;///不重复的数组长
	for(int i=0;i<20;i++)
    {
        int x;
        cin>>x;
        if(x<=100&&x>=10)///数据有效
        {
            int flag=0;
        for(int j=0;j<cnt;j++)///去重
        {
            if(x==a1[j])
            {
                flag=1;break;
            }
        }
        if(!flag)
            a1[cnt++]=x;
        }
        
    }
    cout<<cnt<<endl;///不重复的数有多少
    for(int i=0;i<cnt;i++)///遍历
    {
        cout<<a1[i]<<' ';
    }

	return 0;
}
