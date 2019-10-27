#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>a;
    int num;
    int i;
    for(i=0; i<20; i++)//将数字存入vector对象中
    {
        int flag=0;
        cin>>num;
        for(vector<int>::iterator j=a.begin(); j<a.end(); j++)
        {
            if(*j==num)//如果输入数字与之前存入的数字相同
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            a.push_back(num);
        }
    }
    for(vector<int>::iterator j=a.begin(); j<a.end(); j++)//输出存入的数字
    {
            cout<<*j<<' ';
    }
    return 0;
}
