#include"Linkstack.h"
using namespace std;
#include<iostream>
linkstack *init_linkstack() {
	linkstack* stack = new linkstack;
	stack->head.next = NULL;
	stack->size = 0;
	return stack;
}
//��ʼ������
void push_linkstack(linkstack* stack, linknode* data) {
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	data->next = stack->head.next;
	stack->head.next = data;
	stack->size++;
	//β�巨

}
//��ջ


void pop_linkstack(linkstack* stack) {
	if (stack == NULL)
	{
		return;
	}
	if (stack->size == 0)
	{
		return;
	}
	//��һ����Ч���
	linknode* pnext = stack->head.next;
	stack->head.next = pnext->next;
}
// ��ջ


linknode *top_linkstack(linkstack* stack){
	if (stack == NULL)
	{
		return NULL;
	}
	if (stack->size == 0)
	{
		return NULL;
	}
	return stack->head.next;
}
// ����ջ��Ԫ��
int size_linkstack(linkstack* stack) {
	if (stack == NULL)
	{
		return -1;
	}
	return stack->size;
}
// ����ջ������
void clear(linkstack* stack) {
	if (stack == NULL) {
		return;
	}
	stack->head.next = NULL;
	stack->size = 0;
}
// ���ջ
void free_link(linkstack* stack) {
	if (stack == NULL) {
		return;
	}
	free(stack);
}
// ����ջ