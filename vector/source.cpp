#include<iostream>
#include<iomanip>

//˳�����
typedef struct vector {
	int size,count;
	int* data;			//˳����еĴ洢�ṹΪ����(��ָ����ʽ����)
} vector;


//��ȡһ���µ�˳���
vector* getNewVector(int n) {
	vector* p = (vector*)malloc(sizeof(vector));   //Ϊ˳�����ռ�
	p->size = n;
	p->count = 0;
	p->data = (int*)malloc(sizeof(int)*n);         //����һ�δ洢�ռ�
	return p;
}

//����˳���
void clear(vector* v) {
	if (v == NULL) return;
	free(v->data);			//�����������Ĵ洢��
	free(v);				//������˳�����
	return;
}

//************������˳���ĳ��ò���*****************

//�������
int inset(vector* v, int pos, int val) {
	if (pos < 0 || pos >= v->count) return 0;		      //�ж�λ�úϷ���
	if (v->size == v->count)  return 0;                   //���˳����Ѿ�����,���ܽ��в������
	for (int i = v->count - 1; i >= pos; i--)             //�˺��ÿ����������ƶ�һλ
	{
		v->data[i + 1]=v->data[i];
	}
	v->data[pos] = val;//��������
	v->count += 1;
	//���ݽṹ���� ����+����,Ҳ�� ά��+ʹ��,
	// ������˳�����,һ��Ԫ�ظ��������仯,�����Ҫ�ı�ԭ������
	return 1;
}

//ɾ������
int erase(vector* v, int pos) {
	if (pos < 0 || pos >= v->count) return 0;		  //�ж�λ�úϷ���
	for (int i = pos + 1; i < v->count; i++)		  //����������и���
	{
		v->data[i] = v->data[i + 1];
	}
	v->count -= 1;
	return 1;
}

//***************��ʼ����*********************


int main() {

	
	
	
	return 0;
}