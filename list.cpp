//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
////���Զ�����λ�ý��п��ٲ����ɾ��
////ռ�ÿռ�� �����ٶ��� û�������
////STL��list��˫������� Ҳ��һ��˫������
////list��vector��Ҫ���� ���ݲ�ͬ����ȱ����ʹ�ò�ͬ������
//void print(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int>L1;//Ĭ�Ϲ���
//
//	//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	print(L1);
//	//���䷽ʽ
//	list<int>L2(L1.begin(), L1.end());
//	print(L2);
//
//	//��������
//	list<int>L3(L2);
//	print(L3);
//
//	list<int>L4(10, 1000);
//	print(L4);
//
//
//}
///// <summary>
///// ��ֵ����
///// </summary>
//void test2()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	print(L1);
//
//	list<int>L2;
//	L2 = L1;
//	print(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//
//	list<int>L4;
//	L4.assign(10, 1000);
//	print(L4);
//
//}
////����
//void test3()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 1000);
//
//	cout << "����ǰ" << endl;
//	print(L1); print(L2);
//
//	L1.swap(L2);
//	cout << "������" << endl;
//	print(L1); print(L2);
//}
////������С�Ĳ��� ����������չʾ ����Ĭ����� ���˾�ɾ��
//void test4()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	//�ж������Ƿ�Ϊ��
//	if (L1.empty())
//	{
//		cout << "KONG" << endl;
//	
//	}
//	else
//	{
//		cout << "L1��Ϊ��" << endl;
//		cout << "L1��Ԫ�ز�Ϊ��Ϊ" << L1.size() << endl;
//	}
//	//�����ƶ���С
//	L1.resize(10,10000);
//	print(L1);
//
//	L1.resize(2);
//	print(L1);
//}
//void test5()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//	//100 
//	print(L1);
//	//βɾ
//	L1.pop_back();
//	print(L1);
//	//ͷɾ
//	L1.pop_front();
//	print(L1);
//	//insert����
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	print(L1);
//
//	//ɾ�� �ṩ������
//	it = L1.begin();
//	L1.erase(++it);
//	print(L1);
//
//	//�Ƴ�   �������Ԫ��
//	L1.push_back(10000);
//	print(L1);
//	L1.remove(10000);
//	print(L1);
//	L1.clear();
//	print(L1);
//}
////���ݴ�ȡ
//void test6()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//û�������� û���������ַ���
//	//Ҳû��at
//	//ԭ����list���������� �������������Կռ䴢�����ݵ�����Ҳ�ǲ�֧��������ʵ�
//
//	cout << "��һ��Ԫ��" << L1.front() << endl;
//	cout << "���һ��Ԫ��" << L1.back() << endl;
//
//	print(L1);
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//	it++;//֧��˫��仯
//	//���ǲ�֧��������ʵ� ������   +1
//
//
//
//
//
//
//}
///// <summary>
///// ��ת������  reverse  ��  sort
///// </summary>
//void test7()
//{
//	list<int> L1;
//	L1.push_back(100);
//	L1.push_back(20);
//	L1.push_back(3);
//	L1.push_back(40);
//	L1.push_back(409);
//	print(L1);
//
//	L1.reverse();
//	cout << "��ת��" << endl;
//	print(L1);
//
//}
//bool mycompare(int v1,int v2)
//{
//	//���� ���õ�һ�������ڵڶ�����
//	return v1 > v2;
//}
//void test8()
//{
//	list<int> L1;
//	L1.push_back(100);
//	L1.push_back(20);
//	L1.push_back(3);
//	L1.push_back(40);
//	L1.push_back(409);
//	cout << "����ǰ" << endl;
//	print(L1);
//	//��֧��������ʵĲ�����sort
//	//��֪������ʵĵ����������� �ڲ����ṩ��Ӧ���㷨
//	L1.sort();
//	cout << "�����" << endl;
//	print(L1);
//
//	//����
//	L1.sort(mycompare);
//	print(L1);
//}
//
//
///// <summary>
///// ������
///// </summary>
//class Person
//{
//public:
//	Person(string name,int age,int height);
//	~Person();
//
//	string mname; int mage; int mheight;
//};
//
//Person::Person(string name, int age, int height)
//{
//	this->mage = age;
//	this->mheight = height;
//	this->mname = name;
//}
//bool com(Person &p1,Person &p2)
//{
//	//������������
//	if (p1.mage == p2.mage)
//	{
//		return p1.mheight < p2.mheight;
//	}
//	return p1.mage < p2.mage;
//}
//Person::~Person()
//{
//}
//void test9()
//{
//	list<Person>l;
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 36, 176);
//	Person p3("��Ȩ", 37, 177);
//	Person p4("����", 38, 171);
//	Person p5("�ŷ�", 35, 179);
//	Person p6("����", 30, 170);
//
//	//��������
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "����" << (*it).mname << "����" << (*it).mage << "���" << (*it).mheight << endl;
//	}
//
//	cout << "----------------------";
//	cout << "�����" << endl;
//	//�����ݵ�����Ҫָ�������������
//	l.sort(com);
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "����" << (*it).mname << "����" << (*it).mage << "���" << (*it).mheight << endl;
//	}
//}
//
//int main()
//{
//	test9();
//}