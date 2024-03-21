#include<iostream>
#include<iomanip>

using namespace std;

int peach(int n) {
	if (n == 1) return 1;
	return (peach(n-1)+1)*2;
}

int main() {
	int n;
	cin >> n;
	cout <<"½á¹ûÊÇ:" << peach(n);
	return 0;
}