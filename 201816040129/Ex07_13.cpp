#include<iostream>
#include<array>

using namespace std;

int main()
{
  int x=-1;//定义一个x值为-1
  const size_t arraySize=20;//大小
  array<int,arraySize>c={};//初始化数组c
  array<int,arraySize>a;//初始化数组a

  cout<<"Please input the data:\n"<<endl;
  for(size_t i=0;i<c.size();++i)
  {
    cin>>c[i];//输入数据存入c中
  }
  for(size_t i=0;i<c.size();++i)//从开头循环
  {
      for(size_t j=i+1;j<=c.size();++j)//从i+1循环

        if(c[i]==c[j])//当c[i]与每次c[i+1]后的任何一个数相等
        {
            x++;//x的值加一
            c[i]=c[x];//此时，相等的那个值（前面的哪一个）会变成i=x时的值
        }
        else
            a[i]=c[i];//如果不相等的话，把c[i]里面的值存到c[i]里面
  }

  for(size_t i=x;i<c.size();++i)//因为有重复时，输出的数据的个数会减少，则使i初始为x值
    cout<<a[i]<<" ";//输出a[i]的值
}
