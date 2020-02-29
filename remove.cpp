#include<iostream>
using namespace std;
#include<vector>
class Solution
{
public:
	void rotate(vector<int>& nums, int k)
	{
		if (k == nums.size()||k==0)
		{
			for (int i = 0; i < nums.size(); i++)
			{
				cout << nums[i] << " ";
			}
			cout << endl;
		}
		else 
		{
			k = k%nums.size();
			vector<int>v1;
			int L = nums.size() - k;//要右移的后面的元素先放进一个容器
									//前面的元素再插入到上一个容器的后面
			for (int i = L; i < nums.size(); i++)
			{
				v1.push_back(nums[i]);
			}
			for (int j = 0; j < L; j++)
			{
				v1.push_back(nums[j]);
			}
			nums.clear();
			nums = v1;
			for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
			{
				cout << *it << " ";
			}
			cout << endl;
		}
		
	}
};
void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	cout << "右移前数组为：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "右移后数组为：" << endl;
	Solution s;
	s.rotate(v, 0);
}
void test02()
{
	vector<int>v;
	int rightnum = 15;
	for (int i = 1; i < 5; i++)
	{
		v.push_back(i);
	}

	cout << "右移前数组为：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "右移" << rightnum << "后数组为：" << endl;
	Solution s1;
	s1.rotate(v, rightnum);
}
int main()
{
	test02();
	system("pause");
	return 0;
}
