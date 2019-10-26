#include <iostream>
#include <array>

using namespace std;

int main()
{
    int x;  //中间变量
	int num = 0;  //数组去重后剩余数字
    array<int,20> n;//n是一个有20个数
    array<int,20> b;//定义一个新的数组

	cout<<"请依次输入20个数字"<<endl;
	for(int i=0;i<20;i++)
	{
		cin>>x;
        if(x>=10&&x<=100)
        {
            n[i]=x;
        }
        else{
            continue;
        }
    }
	x=0;  //中间变量清零

    b[0] = n[0];  //数组去重复数字
	for(size_t i=1;i<n.size();++i)
	{
	    for(size_t j=i+1;j<n.size();++j)
		if(b[num] != n[i])
		{
			b[num+1] = n[i];
			num++;//双重循环 如果有重复的则不存入新建数组
		}
	}
    for(int i=0;i<num+1;i++)  //输出去重好的数字
	{
		cout<<"输出去重后数字："<<b[i]<<endl;
	}

	return 0;

}
