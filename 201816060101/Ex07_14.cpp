//优化空间，使占用内存最少
//时间复杂度O(n^2)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//检查数组里是否有元素x
bool check(vector<int> &a, int val) {
	for (int i : a) {
		if (i == val) return 1;
	}
	return 0;
}

int main() {
	vector<int> a;	//定义数组
	int alen = 0;	//数组有效长度
	for (int i = 0; i < 20; i++) {
		int x;
		cin >> x;
		if (!check(a, x)) a.push_back(x);	//若数组里面元素x没有就加入数组
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << (i == alen - 1 ? "\n" : " ");
	}
	return 0;
}
