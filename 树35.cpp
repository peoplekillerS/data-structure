//#include<iostream>
//#include<stack>
//#include"Linkstack.h"
//#define myfalse 0
//#define mytrue 1
//using namespace std;
//int num = 0;
//typedef struct Binarynode {
//	char ch;
//	struct Binarynode* lchild;
//	struct Binarynode* rchild;
//	
//}binarynode;
////���������� 
//typedef struct Bitreestacknode {
//	linknode node;
//	binarynode* root;
//	int flag;
//}bitreestacknode;
////bitreestacknode* creatreestacknode(binarynode* node, int flag)
////{
////	bitreestacknode* newnode = new bitreestacknode;
////	newnode->root = node;
////	newnode->flag = flag;
////	return newnode;
////}
////void nonrecursion(binarynode* root)
////{
////	//����ջ
////	linkstack* stack = init_linkstack();
////	//�Ѹ��ڵ��ջ����
////	push_linkstack(stack, (linknode*)creatreestacknode(root, myfalse));
////
////	while (size_linkstack(stack)>0) {
////		//�ȵ���ջ��Ԫ��
////		bitreestacknode* node = (bitreestacknode*)top_linkstack(stack);
////		pop_linkstack(stack);
////		//�жϽڵ��Ƿ�Ϊ��
////		if (node->root == NULL)
////		{
////			continue;
////		}
////		if (node->flag == mytrue) {
////			cout << node->root->ch;
////		}
////	}
////
////
////
////}
//void recursion_1(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	cout << root->ch;
//	//����������
//	recursion_1(root->lchild);
//	//����������
//	recursion_1(root->rchild);
//}
////����������
//binarynode* copybinarytree(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	//����������
//	binarynode* lchid = copybinarytree(root->lchild);
//	//����������
//	binarynode* rchid = copybinarytree(root->rchild);
//	//�����ڵ�
//	binarynode* newnode = new binarynode;
//	newnode->ch = root->ch;
//	newnode->lchild = lchid;
//	newnode->rchild = rchid;
//
//	return newnode;
//}
//int caculatedepth(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int depth = 0;
//	//���������ĸ߶�
//	int leftdepth = caculatedepth(root->lchild);
//	int rightdepth = caculatedepth(root->rchild);
//	depth = leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
//	return depth;
//}
//void recursion(binarynode*root)
//{
//	if (root == NULL)
//	{
//		return;
//	}  
//	////�������                                      
//	////�ȷ��ʸ����
//	//cout << root->ch;
//	////�ٱ���������
//	//recursion(root->lchild);
//	////�ٱ���������
//	//recursion(root->rchild);                                        
//
//	//zhongxv
//	/*recursion(root->lchild);
//	cout << root->ch;
//	recursion(root->rchild);*/
//	recursion(root->lchild);
//	
//	recursion(root->rchild);
//	cout << root->ch;
//	
//}
//void freespacebinarytree(binarynode*root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	//�ͷ�������
//	freespacebinarytree(root->lchild);
//	//�ͷ�������
//	freespacebinarytree(root->rchild);
//	//�ͷŵ�ǰ�ڵ�
//	free(root);
//}
//int caculate(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (root->lchild == NULL && root->rchild == NULL)
//	{
//		num++;
//	}
//	//������Ҷ�ӽڵ���Ŀ
//	caculate(root->lchild);
//	//������Ҷ�ӽڵ���Ŀ
//	caculate(root->rchild);
//	return num;
//
//}
//
////��Ĭ�Ϲ��캯��ȥ���������ÿһ��ֵ
//void createbinarynode()
//{
//	//�����ڵ�
//	binarynode node1 = { 'A',NULL,NULL };
//	binarynode node2 = { 'B',NULL,NULL };
//	binarynode node3 = { 'C',NULL,NULL };
//	binarynode node4 = { 'D',NULL,NULL };
//	binarynode node5 = { 'E',NULL,NULL };
//	binarynode node6 = { 'F',NULL,NULL };
//	binarynode node7 = { 'G',NULL,NULL };
//	binarynode node8 = { 'H',NULL,NULL };
//
//	//�����ڵ��ϵ
//	node1.lchild = &node2;
//	node1.rchild = &node6;
//	node2.rchild = &node3;
//	node3.lchild = &node4;
//	node3.rchild = &node5;
//	node6.rchild = &node7;
//	node7.lchild = &node8;
//
//	////�ݹ����
//	//recursion(&node1);
//	/*cout << caculatedepth(&node1) << endl;;*/
//	/*binarynode* root = copybinarytree(&node1);
//	recursion_1(root);
//	freespacebinarytree(root);*/
//
//}
//typedef struct Person {
//	linknode node;
//	string name;
//	int age;
//}person;
//
//
//int main()
//{
//	createbinarynode();
//	
//
//
//}