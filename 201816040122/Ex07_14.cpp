#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
using namespace std;
void outputvector(const vector<double> &items) //输出函数
{
    for(double item : items)
        cout<<item<<' ';
     cout<<endl;
}
int main()
{
    double x;
    int flag=0;                           //判断vecto里面是否存在x；
    vector<double>n(0);
    vector<double>::iterator it;
    cout<<"请输入20个10~100的数值（包括10和100）"<<endl;
    for(int i=0;i<20;++i)                //将20个数值输入
    {
        cin>>x;                          //输入数值
        if(x>=10&&x<=100)              //条件
        {
         for(int j=0;j<n.size();j++)  //遍历vector,看a[i]是否等于x；
            {
            if(n[j]==x)
            flag=1;
            }
            if(flag==0)      //no insiders continue to trade
            {n.push_back(x);}
            flag=0;
        }
    }
    outputvector(n);
    cout<<endl;


    return 0;
}
