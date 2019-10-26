#include <iostream>
#include <vector>
#define M 20 
using namespace std;
 
int main()
{
	int num,i,j,k=0,flag=0;
	vector <int> a ;
	for (i=0;i<M;i++)
	{
		cin >> num;
		if(num >= 10 && num <= 100)		//判断数据是否处于10和100之间 
		{
			for(j=0;j<i;j++)
			{
				if(a[j]==num)			//判断num有没有和之前的数据重复 
				{
					flag=1;
				}
			} 
			if(flag==0)					//若无重复，则将其写入数组 
			{
				a.push_back(num);
				k++;
			}
		}
		flag=0;
	}
	for(i=0;i<k;i++)
	{
		cout << a[i] << endl;
	} 
}
