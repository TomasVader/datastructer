//#include<iostream>
//#include<iomanip>
//#include<vector>
//
//using namespace std;
//
////˼·:�ǰλ��Ϊi,iλ���������С������j,ֻҪ��>=j�Ķ�����������
//
//int arr[10];
//
//void print_one_result(int n) {
//	for (int i = 0; i <= n; i++) {		//�������(����Ϊֹ��������)
//		if (i) cout << " ";				//���һ�����Ϳ�һ��
//		cout << arr[i];
//	}
//	cout << endl;						//���������
//	return;
//}
//
//void list(int i, int j, int n)          //i����λ��,j����ǰλ���������С��,n������������
//{
//	if (j > n)return;
//	for (int k = j; k <= n; k++)        //ö��iλ�õ����(k����ȡ>=j��������)
//	{
//		arr[i] = k;						//k����ʵ�����ȥ����
//		print_one_result(i);			//�����ǰö�ٵõ��Ľ��(����Ҫ�����ǰ��λ��,�����λ�û�����һ��ĵݹ麯��ִ��)
//		list(i + 1, k + 1, n);			//�������������Ŀ�����
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