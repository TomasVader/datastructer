//#include<iostream>
//#include<iomanip>
//#include<vector>
//using namespace std;
//
//int bond(int i, vector<int>& arr, int n)//小球从i位置被弹出的次数
//{
//	if (i >= n) return 0;
//	return bond(i + arr[i], arr, n)+1;
//}
//
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int>arr;      //数组读入
//	for (int i = 0, a; i < n; i++) {
//		cin >> a;
//		arr.push_back(a);//将读入的数放在数组中
//	}
//	cout << bond(0, arr,n)<<endl;
//	return 0;
//}