#include<iostream>
#include<iomanip>
#include<vector>						//本代码中使用vector函数,需要调用vector头文件
using namespace std;



int bond(int i,vector<int>&arr,int n)   //函数研究从i位置弹跳的次数 
										//利用取地址传递数组
{
	if (i >= n) return 0;
	return bond(i + arr[i],arr, n)+1;
}



int main() {
	int n;
	cin >> n;
	vector<int> arr;					//vector<类型>arr,创建新数组
	for (int i = 0,a; i < n; i++) {
		cin >> a;
		arr.push_back(a);				//arr.push_back(a)把a放到数组里
	}
	
	cout << bond(0,arr, n);
	return 0;
}