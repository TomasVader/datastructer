//����һ:��ΰ����ֵ������ö��:�ҵ���ǰλ�õ���С������,Ȼ����������ö��
//�����:��ο��ƴ�С�����˳��:�����±�����Ǵ�����λ��
//������:�������:�������
#include<iostream>
#include<iomanip>
using namespace std;

int arr[10];

//������
void print_one_result(int n) {
	for (int i = 0; i < n; i++) {
		if (i)cout << " ";
		cout << arr[i];
	}
	cout << endl;
	return;
}


//��ο���ÿ��λ�õ�����
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
