#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
	vector< int >s(0);
	int m = 0,i,num;

    cout << "请输入20个数字:\n" << endl;

	for (i = 0; i < 20; i++)
	{
		cin >> num;//输入数字

		if (num < 10 || num > 100)//判断输入数字正确性
		{
			cout << "输入数字错误" << endl;
			continue;
		}
		int j = 0;
		for (j = 0; j < m; j++) {
			if (s[j] == num)
				break;//找到相同的退出循环
		}
		if (j == m){
			s.push_back(num);
			//s[m] = num;
			m++;
		}
	}

    cout << "\n消除重复数字后，剩余数字为：\n" << endl;

	for (int i = 0; i < m; ++i)//输出这串数字
	{
		cout << s[i] << " ";
	}
	return 0;
}
