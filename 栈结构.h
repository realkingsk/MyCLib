#ifndef _STACK_H_
#define _STACK_H_
#include <stdio.h>

typedef int datatype; // �޸�datatype������ 


struct d_stack
{
	datatype data;        //���ݴ洢�� 
	struct d_stack* pre;  //ǰ��ָ�� 
};

//��ʼ�� 
struct d_stack* init_stack() {
	struct d_stack *t = (struct d_stack*)malloc(sizeof(struct d_stack));
	t->data;
	t->pre = NULL;
	return t;
}

//��ջ���� �ɹ�����1 ʧ�ܷ���0 
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

//��ջ���� �ɹ�����1 ʧ�ܷ���0 
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
