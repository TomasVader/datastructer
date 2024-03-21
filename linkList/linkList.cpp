#include<iostream>>
#include<time.h>
#include<iomanip>
using namespace std;

//����ṹ����
typedef struct Node {
	int data;
	Node* next;
}Node;

//������������
Node* getNewNode(int val) {
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = val;
	p->next = NULL;
	return p;
}

//ɾ������
void clear(Node* head) {
	for (Node* p = head,*q; p; p = p->next) {
		q = p->next;
		free(p);
	}
}

//������
Node* insert(Node* head, int pos, int val) {
	if (pos == 0) {
		Node*p = getNewNode(val);
		p->next = head;
		return p;
	}
	Node* p = head;
	if (p == NULL)return head;
	for (int i = 0; i < pos; i+=1) p = p->next;
	Node* node = getNewNode(val);
	node->next = p->next;
	p->next = node;
	return p;
}

//�������
void output_linklist(Node* head) {
	int len = 0,n=0;
	for (Node* p = head; p; p = p->next)n += 1;			//ͳ�ƽ����
	for (int i = 0; i < n; i++) {
		cout << setw(3) << i << "  ";
	}
	cout << endl;
	for (Node* p = head; p; p = p->next) {
		cout << setw(3) << p->data << "->";
	}
	cout << endl<<endl<<endl;
	return;
}



int main() {
	srand(time(0));
	#define MAX_OP 7
	Node* head = NULL;
	for (int i = 0; i < MAX_OP; i++) {
		int pos = rand() % (i + 1), val = rand() % 100;
		cout << "insert value(" << val << ")at position(" << pos << ") to linklist" << endl;
		head = insert(head,i,val);
		output_linklist(head);
	}
	clear(head);
	return 0;
}