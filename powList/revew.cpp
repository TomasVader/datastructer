//��������
//�ֵ�����ʲô:ÿ��λ�ô�С��������
//���ʵ���ֵ���:��ǵ�ǰλ��,���Ҹ�λ���������С����
//������:�μ������ڲ�����
#include<iostream>
#include<iomanip>
using namespace std;

int arr[10];

//������
void print_one_result(int n) {
	for (int i = 0; i <= n; i++) {
		if (i)cout << " ";
		cout << arr[i];
	}
	cout << endl;
	return;
}




//���ʵ���ֵ���
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