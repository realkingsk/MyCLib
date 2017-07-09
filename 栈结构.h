#ifndef _STACK_H_
#define _STACK_H_
#include <stdio.h>

typedef int datatype; // 修改datatype的类型 


struct d_stack
{
	datatype data;        //数据存储段 
	struct d_stack* pre;  //前驱指针 
};

//初始化 
struct d_stack* init_stack() {
	struct d_stack *t = (struct d_stack*)malloc(sizeof(struct d_stack));
	t->data;
	t->pre = NULL;
	return t;
}

//入栈操作 成功返回1 失败返回0 
int push_stack(struct d_stack** data, datatype temp) {
	struct d_stack *t = (struct d_stack*)malloc(sizeof(struct d_stack));
	if (t == NULL) {
		return 0;
	}
	t->data = temp;
	t->pre = *data;
	*data = t;
	return 1;
}

//出栈操作 成功返回1 失败返回0 
int pop(struct d_stack** data, datatype *out) {
	if ((*data)->pre == NULL) {
		return 0;
	}
	struct d_stack* temp;
	datatype tempd = (*data)->data;
	*out = tempd;
	temp = (*data)->pre;
	free(*data);
	*data = temp;
	return 1;
}
#endif
