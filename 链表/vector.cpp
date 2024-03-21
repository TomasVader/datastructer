#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

//˳���Ľṹ����
typedef struct vector {
    int size, count;
    int* data;
} vector;

void output_vector(vector* v) {
    cout << "count :";
    for (int i = 0; i < v->count; i++) {
        cout << setw(3) << i+1<<"\t";                         //��һ�е�������೤
    }
    cout << endl;
    cout << "number:";

    for (int i = 0; i < v->count; i++) {
        if (v->data[i] > 100 || v->data[i] < -100)v->data[i] = 0;
        cout << setw(3) << v->data[i]<<"\t";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    return; 
}

//˳���Ľṹ����
//�����µ�˳���
vector* get_new_vector(int n) {
    vector* p = (vector*)malloc(sizeof(vector));
    p->size = n;                                            //��С
    p->count = 0;                                           //����
    p->data = (int*)malloc(sizeof(int) * n);                //������������
    return p;
}

//ɾ������˳���
void clear(vector* v) {
    if (v == NULL) return;
    free(v->data);                                          //����������������
    free(v);
}

//���Ӳ���:���ݲ���
int expand(vector* v) {
    if (v == NULL)return 0;
    cout << "the vector hans been expand" << endl<<endl;
    int *p= (int*)realloc(v->data, sizeof(int)*2 * v->size);
    if (p == NULL)return 0;
    v->data = p;
    v->size *= 2;
    return 1;
}

//��Ҫ����:�������
int insert(vector* v, int pos, int val) {
    if (pos > v->count|| pos < 0) return 0;
    if (v->count == v->size || ! expand(v) )return 0;
    //ԭλ�ú�Ԫ�����Ųһ��
    for (int i = v->count; i > pos; i--) {
        v->data[i + 1] = v->data[i];
    }
    v->data[pos] = val;                             //����������
    v->count++;
    cout << "count="<< v->count << endl;
    return 1;
}



//��Ҫ����:ɾ������
int erase(vector* v, int pos) {
    if (v->count == 0)return 0;
    for (int i = pos + 1; i < v->count; i++) {
        v->data[i - 1] = v->data[i];
    }
    v->count--;
    cout << "count=" << v->count << endl;
    return 1;
}

int main() {
    srand(time(0));
    #define MAX_OP 20
    vector* v = get_new_vector(2);
    for (int i = 0; i < MAX_OP; i++) {
        int op = rand() % 4,pos,val,ret;
        switch (op) {
        case 0:
        case 1:
        case 2:
            pos = rand() % (v->count + 2);
            val = rand() % 100;
            ret = insert(v, pos, val);
            printf( "insert %d at %d to vector=%d\n", val, pos, ret );
            cout << endl;
            break;
        case 3:
            pos= rand() % (v->count + 2);
            ret = erase(v, pos);
            printf("erase item %d at vector=%d\n", pos,ret);
            cout << endl;
            break;
        }
        output_vector(v);
    }

    return 0;
}