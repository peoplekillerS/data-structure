//#include<iostream>
//#include<algorithm>
//#include<set>
//using namespace std;
////�������ݵ�ʱ���Զ��ź�˳��
////set���������ظ�������
////����multiset�������ظ�Ԫ��
//void print(set<int>s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(10);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	//��������
//	//�����ص� ������������ʱ�Զ�����
//	//set����������ظ�
//	print(s1);
//	set<int>s2(s1);
//	print(s2);
//
//
//}
////��С
//void test2()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	print(s1);
//
//	if (s1.empty())
//	{
//		cout << "kong" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "Ԫ�ظ���" << s1.size() << endl;
//	}
//}
////����
//void test3()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	
//
//	set<int> s2;
//	//�������ݵķ�ʽֻ��insert
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(400);
//	s2.insert(300);
//
//	cout << "����ǰ" << endl;
//	print(s1);
//	print(s2);
//
//	s1.swap(s2);
//
//	cout << "������" << endl;
//	print(s1);
//	print(s2);
//
//}
////�����ɾ�� insert erase clear 
//void test4()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	//����
//	print(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());
//	print(s1);
//	//ָ��Ŀ��ɾ��
//	s1.erase(30);
//	print(s1);
//
//	s1.erase(s1.begin(), s1.end());
//	print(s1);
//
//	s1.clear();
//	print(s1);
//
//}
////���� �� ͳ��
//void test5()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//}
//void test6()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "you" << endl;
//	}
//	else
//	{
//		cout << "kong" << endl;
//	}
//}
//void test7()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	int num = s1.count(30);
//	//����ͳ�Ƶ�set ���ֻ����0��1
//	cout << "num=" << num << endl;
//}
//void test8()
//{
//	set<int>s;
//	//pair����ŵ��ǵ�����
//	pair<set<int>::iterator, bool>ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��1�β���ʧ��" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "��2�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//	multiset<int>ms;
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << endl;
//
//}
////pair���鴴��  ���ö�����Է�����������
//void test9()
//{
//	//��һ�ַ�ʽ
//	pair<string, int>p("Tom", 20);
//	cout << "����" << p.first << "����" << p.second << endl;
//
//	//�ڶ��ַ�ʽ
//	pair<string, int>p2 = make_pair("jerry", 30);
//	cout << "����" << p2.first << "����" << p2.second << endl;
//
//
//}
////���÷º������ı��������
//class Person
//{
//public:
//	//��һ���������ص��ǣ����ڶ��������ǲ����б�
//	bool operator()( int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//	
//
//
//};
//
//
//
//void test10()
//{
//	set<int> s1;
//	//�������ݵķ�ʽֻ��insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(10);
//	print(s1);
//
//	//ָ������Ӵ�С �º�����һ������ ����Ҫдһ��class
//	set<int,Person> s2;
//	//�������ݵķ�ʽֻ��insert
//	s2.insert(100);
//	s2.insert(20);
//	s2.insert(40);
//	s2.insert(30);
//	s2.insert(10);
//	for (set<int, Person>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
////����Զ���������������ı�˳��c
//class person
//{
//public:
//	person(string name,int age);
//	string mname; int mage;
//
//};
//
//person::person(string name,int age)
//{
//	this->mage = age;
//	this->mname = name;
//}
//
//
//class mycom
//{
//public:
//	//����������Ǹ�const�ر���
//	bool operator()( const person&p1,  const person&p2)const
//	{
//		//�����併��
//		return p1.mage > p2.mage;
//	}
//
//private:
//
//};
//
//
//void test11()
//{
//	//�Զ����������� ����ָ���������
//	set<person,mycom>s;
//
//	person p1("����", 24);
//	person p2("����", 28);
//	person p3("�ŷ�", 25);
//	person p4("����", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<person,mycom>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << it->mname << it->mage << endl;
//	}
//
//
//}
//void test12()
//{
//
//}
//void test13()
//{
//
//}
//void test14()
//{
//
//}
//
//int main()
//{
//	test11();
//}