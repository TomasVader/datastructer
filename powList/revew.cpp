//三个问题
//字典序是什么:每个位置从小到大排列
//如何实现字典序:标记当前位置,查找该位置能填的最小数字
//如何输出:参见程序内部函数
#include<iostream>
#include<iomanip>
using namespace std;

int arr[10];

//如何输出
void print_one_result(int n) {
	for (int i = 0; i <= n; i++) {
		if (i)cout << " ";
		cout << arr[i];
	}
	cout << endl;
	return;
}




//如何实现字典序
void list (int i,int j,int n){
	if (j > n) return;
	for (int k = j; k <= n; k++) {
		arr[i] = j;
		print_one_result(i);
		list(i + 1, k + 1, n);
	}
}


int main() {
	int n;
	cin >> n;
	list(0, 1, n);
	return 0;
}