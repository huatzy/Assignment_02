#include <iostream>
#include<array>
using namespace std;

int main()

{

	array< int, 20> a1, a2;///a1为原始数组，a2为去重后的数组
	int sum = 0;
	for (int i = 0; i < 20; i++)
	{
		int x;
		cin >> x;
		if (x >= 10 && x <= 100)//数据合法
	a1[sum++] = x;;//输入原始数据
	}
	int cnt = 0;
	for (int i = 0; i < sum; i++)//去重
	{

		int flag = 0;
		for (int j = i+1; j < sum; j++)
		{

			if (a1[i] == a1[j])			flag = 1;

		}
		if (!flag)
		a2[cnt++] = a1[i];

	}

	cout << cnt << endl;//一共有多少不同的数

	for (int i = 0; i < cnt; i++)//输出去重后的数组
         cout << a2[i] << ' ';

	return 0;



}
