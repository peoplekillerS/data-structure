#pragma once
#pragma once
#ifndef LINKQIYE_H
#define LINKQIYE_H
#include<iostream>

//������
typedef struct LINKNODE {
	//������ָ�뷽��ǿ��ת����Ϊ������ָ��
	struct LINKNODE* next;
} linknode;
//����ṹ��
typedef struct Linklist {
	linknode head;
	int size;//���ؽ����Ŀ
	//����Ҫ���� ������Ҫȥ����


}linklist;

typedef struct Mydata {

	linknode node;
	char name[64];
	int age;
}mydata;
type
//��ӡ����ָ��
typedef void(*PRINTLINKNODE)(linknode*);

//��ʼ������
linklist* init_linklist();
//��ָ��λ�ò���
void insert_linklist(linklist* list, int pos, linknode* data);
//ɾ��ָ��λ�õ�ֵ
void delete_linklist(linklist* list, int pos);
//��ó���
int size_linklist(linklist* list);
//���ص�һ������λ��
void* front_linklist(linklist* list);
//�ͷ������ڴ�
void freespace_linklist(linklist* list);
//����Ԫ��
int find_linklist(linklist* list, void* data);
//��ӡ������
void print_linklist(linklist* list, PRINTLINKNODE print);
//����ֵ�Ǹ�void ���� �����Ǹ� void *��������

void myprint(void* data);

#endif // !LINKLIST_H

