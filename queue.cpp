//#include<iostream>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
////�Ƚ��ȳ�
////push���  pop����
////ֻ�ж�ͷ�Ͷ�β���ܱ������� ���Բ������б�����Ϊ
//class Person
//{
//public:
//	Person(string name, int age);
//	~Person();
//
//	string mname;
//	int mage;
//};
//
//Person::Person(string name,int age)
//{
//	this->mname = name;
//	this->mage = age;
//}
//
//Person::~Person()
//{
//}
//void test1()
//{
//	//�����õ����ݾ���ģ��
//	queue<Person>q;
//
//	//ʵ����
//	Person p1("��ɮ",30);
//	Person p2("�����", 1000);
//	Person p3("��˽�", 90);
//	Person p4("ɳɮ", 80);
//
//	//���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	while (!q.empty())
//	{
//		//�鿴��ͷ
//		cout << "��ͷԪ��---������" << q.front().mname << q.front().mage << endl;
//
//
//		//��β
//		cout<<"��β--"<< q.back().mname << q.back().mage << endl;
//
//		q.pop();
//	}
//	cout << "queue�Ĵ�С" << q.size() << endl;
//}
//int main()
//{
//	test1();
//}