#pragma once
#ifndef DANYMIC_H
#define DANYMIC_H
//��̬�����ڴ� ���� ��������ݵ��ڴ���ڶ��� 
//ֱ����capacity���ٺ��ڴ� ���һֱ�ڿ���
//size���� ��¼��ǰ��������Ԫ�ظ���

//��̬����ṹ�嶨������
typedef struct danymic {
	int* p;//������ݵĵ�ַ
	int size;//��ǰ�ж��ٸ�Ԫ��
	int capacity;//���� ��������ǰ�ܹ���������Ԫ��
}darr;


//дһϵ�ж����danymic�Ľṹ������ĺ���
//��ʼ��
//�����������鴫��ȥ�����׵�ַ ����*
darr* da();
//����
void push_back_arr(darr* arr, int value);
//ɾ��
void remove_arr(darr* arr, int pos);
//����ֵɾ��
void removebyvalue(darr* arr, int value);
//����
int findarr(darr* arr, int value);
//��ӡ
void print(darr* arr);
//�ͷŶ�̬������ڴ�
void freespace(darr* arr);

//�������
void cleararr(darr* arr);
int capacityarr(darr* arr);
int sizearr(darr* arr);
int atarr(darr* arr, int pos);


#endif // danymic
