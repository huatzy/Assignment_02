#include <iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;

int main()
{

	vector<int> a1;///a1为原始数组
	
	for (int i = 0; i < 5; i++)
	{
		int x;
		cin >> x;
		if(x<=100&&x>=10)//判断数据合法
		a1.push_back(x);//输入
	}
	 a1.erase(unique(a1.begin(),a1.end()),a1.end()) ;//去重
   
	 cout << a1.size() << endl;//输入有多少个不同的数
   
	for (int i = 0; i <a1.size() ; i++)//输出去重后的数组
		cout << a1[i] << ' ';

	return 0;

}
