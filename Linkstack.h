#ifndef LINKSTACK
#define LINKSTACK
//��ʽջ�Ľ��
typedef struct Linknode {
	struct Linknode* next;
}linknode;
//��ʽջ
typedef struct Linkstack {
	Linknode head;
	int size;
}linkstack;

linkstack *init_linkstack();
//��ʼ������
void push_linkstack(linkstack* stack, linknode* data);
//��ջ
void pop_linkstack(linkstack* stack);
// ��ջ
linknode *top_linkstack(linkstack* stack);
// ����ջ��Ԫ��
int size_linkstack(linkstack* stack);
// ����ջ������
void clear(linkstack* stack);
// ���ջ
void free_link(linkstack* stack);
// ����ջ
// 
//
#endif // !LINKSTACK

