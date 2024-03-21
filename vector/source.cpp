#include<iostream>
#include<iomanip>

//顺序表定义
typedef struct vector {
	int size,count;
	int* data;			//顺序表中的存储结构为数组(以指针形式表现)
} vector;


//获取一个新的顺序表
vector* getNewVector(int n) {
	vector* p = (vector*)malloc(sizeof(vector));   //为顺序表申空间
	p->size = n;
	p->count = 0;
	p->data = (int*)malloc(sizeof(int)*n);         //开辟一段存储空间
	return p;
}

//销毁顺序表
void clear(vector* v) {
	if (v == NULL) return;
	free(v->data);			//先销毁连续的存储区
	free(v);				//再销毁顺序表本身
	return;
}

//************下面是顺序表的常用操作*****************

//插入操作
int inset(vector* v, int pos, int val) {
	if (pos < 0 || pos >= v->count) return 0;		      //判断位置合法性
	if (v->size == v->count)  return 0;                   //如果顺序表已经插满,则不能进行插入操作
	for (int i = v->count - 1; i >= pos; i--)             //此后的每个程序向后移动一位
	{
		v->data[i + 1]=v->data[i];
	}
	v->data[pos] = val;//插入数据
	v->count += 1;
	//数据结构既是 操作+定义,也是 维护+使用,
	// 所以在顺序表中,一旦元素个数发生变化,则必须要改变原有容量
	return 1;
}

//删除操作
int erase(vector* v, int pos) {
	if (pos < 0 || pos >= v->count) return 0;		  //判断位置合法性
	for (int i = pos + 1; i < v->count; i++)		  //后面的数进行覆盖
	{
		v->data[i] = v->data[i + 1];
	}
	v->count -= 1;
	return 1;
}

//***************开始测试*********************


int main() {

	
	
	
	return 0;
}