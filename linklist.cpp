#include"LINKLIST.h"
#include<iostream>
using namespace std;
//��ӡ����ָ��
typedef void(*PRINTLINKNODE)(void*);



//��ʼ������
linklist* init_linklist()
{
	linklist* list = (linklist*)malloc(sizeof(linklist));
	list->size = 0;

	//ͷ����ǲ�����������Ϣ��
	list->head = (linknode*)malloc(sizeof(linknode));
	list->head->data = NULL;
	list->head->next = NULL;
	return list;
}
//��ָ��λ�ò���
void insert_linklist(linklist* list, int pos, void* data) {
	if (list == NULL)
	{
		return;

	}
	if (data == NULL)
	{
		return;

	}
	//�Ѻô���posyuejie
	if (pos<0 || pos>list->size)
	{
		pos = list->size;
	}
	//�����µĽ��
	linknode* newnode = (linknode*)malloc(sizeof(linknode));
	newnode->data = data;
	newnode->next = NULL;

	//�ص㣡������ͨ��pos���forѭ��ȥ�ҳ��� Ŀǰָ���λ��
	linknode* pcurrent = list->head;
	for (int i = 0; i < pos; i++)
	{
		pcurrent = pcurrent->next;
	}
	//�½��������
	newnode->next = pcurrent->next;
	pcurrent->next = newnode;
	list->size++;
}
//ɾ��ָ��λ�õ�ֵ
void delete_linklist(linklist* list, int pos) {
	if (list == NULL)
	{
		return;
	}
	if (pos < 0 || pos >= list->size)
	{
		return;
	}
	//����ɾ������ǰһ�����
	linknode* pcurrent = list->head;
	for (int i = 0; i < pos; i++)
	{
		pcurrent = pcurrent->next;
	}
	//����ɾ���Ľ��
	linknode* pdel = pcurrent->next;
	pcurrent->next = pdel->next;
	free(pdel);
	list->size--;
}
//��ó���
int size_linklist(linklist* list) {
	return list->size;
}
//���ص�һ������λ��
void* front_linklist(linklist* list) {
	return list->head->next->data;
	//next��һ��node����һ��������˼ ��data����������Ҫ��
}
//�ͷ������ڴ�
void freespace_linklist(linklist* list) {
	if (list == NULL)
	{
		return;
	}
	//����ָ�����
	linknode* pcurrent = list->head;
	while (pcurrent != NULL)
	{
		//������һ�����
		linknode* pnext = pcurrent->next;
		free(pcurrent);
		pcurrent = pnext;

	}
	list->size = 0;
	free(list);
}

void myprint(void* data)
{
	person* p = (person*)data;
	
	cout << "name:" << p->name << "age:" << p->age << "score:" << p->score;
	cout << endl;
}
//����Ԫ��
int find_linklist(linklist* list, void* data) {
	if (list == NULL)
	{
		return -1;
	}
	if (data == NULL)
	{
		return -1;
	}
	//��������
	linknode* pcurrent = list->head->next;
	int i = 0;
	while (pcurrent != NULL)
	{
		if (pcurrent->data == data)
		{
			break;
		}
		i++;
		pcurrent = pcurrent->next;
	}
	return i;
}
//��ӡ������
void print_linklist(linklist* list, PRINTLINKNODE print) {
	if (list == NULL)
	{
		return;
	}
	//����ָ�����
	linknode* pcurrent = list->head->next;
	while (pcurrent != NULL)
	{
		print(pcurrent->data);
		pcurrent = pcurrent->next;
	}

}
//����ֵ�Ǹ�void ���� �����Ǹ� void *��������
