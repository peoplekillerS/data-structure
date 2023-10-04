#include<iostream>
#include"danymic.h"
using namespace std;
//��̬�����ʼ��
darr* da() {

	darr* myarr = (darr*)malloc(sizeof(darr));
	//��ǰ���darr*�������Ƿ���darr���� maloc�������� ����һ��darr���͵��ڴ�
	//��ʼ��
	myarr->size = 0;
	myarr->capacity = 20;
	myarr->p = (int*)malloc(sizeof(int) * myarr->capacity);
	//�൱�ڷ�����һ������ ������ĳЩָ����Ķ���
 	return myarr;

}



//����

void push_back_arr(darr* arr, int value) {
	//�жϿռ��Ƿ��㹻
	if (arr->size == arr->capacity)
	{
		//��һ�� ����һ�������ڴ�ռ� �¿ռ��Ǿɿռ��2��
		int* newspace = (int*)malloc(sizeof(int) * arr->capacity * 2);
		//�ڶ����������ݵ��µĿռ�
		memcpy(newspace, arr->p, arr->capacity * sizeof(int));//�����ǿ����µĿռ� ����ռ� ���ǿ�������һ��һ���ֽ�����
		//�ͷžɿռ���ڴ�
		free(arr->p);
		//�������� �����µĵ�ַ�ռ�
		arr->capacity = arr->capacity * 2;
		arr->p = newspace;

	}
	//������Ԫ��
	arr->p[arr->size] = value;
	arr->size++;
}
//ɾ��
void remove_arr(darr* arr, int pos) {
	if (arr == NULL)
	{
		return;
	}
	//�ж�λ���Ƿ���Ч
	if (pos < 0 || pos >= arr->size)
	{
		return;
	}
	//ɾ��Ԫ��
	for (int i = pos; i < arr->size-1; i++)
	{
		arr->p[i] = arr->p[i + 1];
	}
	arr->size--;
}
//����ֵɾ����һ�ε�λ��
void removebyvalue(darr* arr, int value) {
	if (arr == NULL)
	{
		return;
	}
	//�ҵ����ֵ��λ��
	int pos = findarr(arr,value);
	/*for (int i = 0; i < arr->size; i++)
	{
		if (arr->p[i] == value)
		{
			pos = i;
			break;
		}
	}*/
	//����λ��ɾ��
	remove_arr(arr, pos);


}
//����
int findarr(darr* arr, int value) {
	if (arr == NULL)
	{
		return-1;
	}
	//����
	int pos = -1;
	for (int i = 0; i < arr->size; i++)
	{
		if (arr->p[i] == value)
		{
			pos = i;
			break;
		}
	}
	return pos;
}
//��ӡ
void print(darr* arr) {

	for (int i = 0; i < arr->size; i++)
	{
		cout << arr->p[i]<<" ";
	}
	cout << endl;

}
//�ͷŶ�̬������ڴ�
void freespace(darr* arr) {

	if (arr == NULL)
	{
		return;
	}
	//���ͷ������ǿ��ڴ�
	if (arr->p != NULL)
	{
		free(arr->p);
	}
	//���ͷ�����
	free(arr);
}
void cleararr(darr* arr) {

	if (arr == NULL)
	{
		return;
	}
	//p->�ռ�
	arr->size = 0;
	//����size�����ȥ 

}
int capacityarr(darr* arr) {
	if (arr == NULL)
	{
		return-1;
	}

	return arr->capacity;
}
int sizearr(darr* arr) {
	return 0;
}
int atarr(darr* arr, int pos) {
	if (arr == NULL)
	{
		return-1;
	}
	return arr->p[pos];
}

