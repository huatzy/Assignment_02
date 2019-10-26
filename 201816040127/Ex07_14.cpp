#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    vector<int> b;
    int x;//中间变量
    int num=0;//数组去重后剩余数字
    cout<<"请依次输入20个数字 : "<<endl;
    for(int i=0;i<20;i++)
    {
        cin>>x;
		if(x>=10&&x<=100)
        {
           a[i]=x;
        }
        else{
               continue;
        }//判断输入数字是否有效
        x=0;
        b[0]=a[0];
        for(int i=1;i<20;++i)
        {
            for(int j=1;j<i;++j)
                if(b[num]!=a[i])
            {
                b[num+1]=a[i];
                b.push_back(x);//去重，将不重复的数字存入 b[num]
                num++;
            }
        }
    for(int i=0;i<num+1;i++)  //输出去重好的数字
	{
		cout<<"输出去重后数字："<<b[i]<<endl;
	}
    }
    return 0;
}
