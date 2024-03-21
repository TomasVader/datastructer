#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

//顺序表的结构定义
typedef struct vector {
    int size, count;
    int* data;
} vector;

void output_vector(vector* v) {
    cout << "count :";
    for (int i = 0; i < v->count; i++) {
        cout << setw(3) << i+1<<"\t";                         //第一行到底输出多长
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

//顺序表的结构操作
//创建新的顺序表
vector* get_new_vector(int n) {
    vector* p = (vector*)malloc(sizeof(vector));
    p->size = n;                                            //大小
    p->count = 0;                                           //存数
    p->data = (int*)malloc(sizeof(int) * n);                //数连续储存区
    return p;
}

//删除既有顺序表
void clear(vector* v) {
    if (v == NULL) return;
    free(v->data);                                          //先销毁连续储存区
    free(v);
}

//附加操作:扩容操作
int expand(vector* v) {
    if (v == NULL)return 0;
    cout << "the vector hans been expand" << endl<<endl;
    int *p= (int*)realloc(v->data, sizeof(int)*2 * v->size);
    if (p == NULL)return 0;
    v->data = p;
    v->size *= 2;
    return 1;
}

//主要操作:插入操作
int insert(vector* v, int pos, int val) {
    if (pos > v->count|| pos < 0) return 0;
    if (v->count == v->size || ! expand(v) )return 0;
    //原位置后元素向后挪一格
    for (int i = v->count; i > pos; i--) {
        v->data[i + 1] = v->data[i];
    }
    v->data[pos] = val;                             //插入新数据
    v->count++;
    cout << "count="<< v->count << endl;
    return 1;
}



//主要操作:删除操作
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