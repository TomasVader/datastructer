#include<iostream>
#include<iomanip>
#include<vector>						//��������ʹ��vector����,��Ҫ����vectorͷ�ļ�
using namespace std;



int bond(int i,vector<int>&arr,int n)   //�����о���iλ�õ����Ĵ��� 
										//����ȡ��ַ��������
{
	if (i >= n) return 0;
	return bond(i + arr[i],arr, n)+1;
}



int main() {
	int n;
	cin >> n;
	vector<int> arr;					//vector<����>arr,����������
	for (int i = 0,a; i < n; i++) {
		cin >> a;
		arr.push_back(a);				//arr.push_back(a)��a�ŵ�������
	}
	
	cout << bond(0,arr, n);
	return 0;
}