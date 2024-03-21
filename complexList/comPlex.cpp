//问题一:如何按照字典序进行枚举:找到当前位置的最小可能数,然后依次往上枚举
//问题二:如何控制从小往大的顺序:加入新变量标记待输入位置
//问题三:怎样输出:详见程序
#include<iostream>
#include<iomanip>
using namespace std;

int arr[10];

//如何输出
void print_one_result(int n) {
	for (int i = 0; i < n; i++) {
		if (i)cout << " ";
		cout << arr[i];
	}
	cout << endl;
	return;
}


//如何控制每个位置的数字
void list(int i, int j, int n,int m) {
	if (i == m) return;
	print_one_result(m);
	for (int k = j;k<=n;k++) {
		
	}
}


int main() {
	int n, m;
	cin >> n >> m;
	list(0, 1, n, m);


	return 0;
}
