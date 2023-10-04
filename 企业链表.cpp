#include<iostream>
#include"LINKQIYE.h"
using namespace std;
//�ں�����

//��ӡ����ָ��
typedef void(*PRINTLINKNODE)(linknode*);

//��ʼ������
linklist* init_linklist()
{
	linklist* list = (linklist*)malloc(sizeof(linklist));
	list->head.next = NULL;
	list->size = 0;
	return list;

}
//��ָ��λ�ò���
void insert_linklist(linklist* list, int pos, linknode* data)
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos < 0 || list->size)
	{
		pos = list->size;
	}
	//���Ҳ���λ��
	linknode* pcurrent =&(list->head);
	for (int i = 0; i < pos; i++)
	{
		pcurrent = pcurrent->next;
	}
	//�����½��
	data->next = pcurrent->next;
	pcurrent->next = data;
	list->size++;
	//ֱ�Ӱ�data�Ž��� ֱ�ӷ��ʵľ���next����

}
//ɾ��ָ��λ�õ�ֵ
void delete_linklist(linklist* list, int pos);
//��ó���
int size_linklist(linklist* list);
//���ص�һ������λ��
void* front_linklist(linklist* list);
//�ͷ������ڴ�
void freespace_linklist(linklist* list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
}
//����Ԫ��
int find_linklist(linklist* list, void* data);
//��ӡ������
void print_linklist(linklist* list, PRINTLINKNODE print)
{
	if (list == NULL)
	{
		return;
	}
	//����ָ��
	linknode* pcurrent = list->head.next;
	while (pcurrent != NULL)
	{
		print(pcurrent);
		pcurrent = pcurrent->next;
	}
}
//����ֵ�Ǹ�void ���� �����Ǹ� void *��������


  















