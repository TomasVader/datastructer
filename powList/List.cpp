//#include<iostream>
//#include<iomanip>
//#include<vector>
//
//using namespace std;
//
////思路:令当前位置为i,i位置能填的最小的数是j,只要是>=j的都可以往里填
//
//int arr[10];
//
//void print_one_result(int n) {
//	for (int i = 0; i <= n; i++) {		//按行输出(到此为止的所有数)
//		if (i) cout << " ";				//输出一个数就空一格
//		cout << arr[i];
//	}
//	cout << endl;						//输出过后换行
//	return;
//}
//
//void list(int i, int j, int n)          //i代表位置,j代表当前位置能填的最小数,n代表传入的最大数
//{
//	if (j > n)return;
//	for (int k = j; k <= n; k++)        //枚举i位置到底填几(k依次取>=j的任意数)
//	{
//		arr[i] = k;						//k代表实际填进去的数
//		print_one_result(i);			//输出当前枚举得到的结果(仅需要输出当前的位置,后面的位置会有下一层的递归函数执行)
//		list(i + 1, k + 1, n);			//尝试其他填数的可能性
//	}
//}
//
//
//int main() {
//	int n;
//	cin >> n;
//	list(0,1,n);
//	return 0;
//}