//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<vector>
//#include "map.h"
//using namespace std;
////�����ܸ�Ч��
//// ÿ��Ԫ�ض���pair��˫�ɶ� ������������ ��һ����key�ڶ���Ԫ����value
//// ����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//// map��multimap���ǹ���ʽ���� ʵ�ֶ��ǿ�������
//// map�������ظ���keyֵ ���������ظ���value
////
//void print(map<int, int>m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << (*it).first << "value=" << it->second << endl;
//	}
//	cout << endl;
//	
//}
//void test1()
//{
//	//����map����
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	m.insert(pair<int, int>(3, 30));
//	print(m);
//
//	map<int, int>m2(m);
//	print(m2);
//
//	map<int, int>m3;
//	m3 = m2;
//	print(m3);
//
//}
////empty size swap
//void test2()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(3, 30));
//	if (m.empty())
//	{
//		cout << "kong" << endl;
//	}
//	else
//	{
//		cout << "bu kong" << endl;
//		cout << "size=" << m.size() << endl;
//	}
//	
//	map<int, int>m2;
//	m2.insert(pair<int, int>(1, 10));
//	m2.insert(pair<int, int>(2, 110));
//	m2.insert(pair<int, int>(4, 402));
//	m2.insert(pair<int, int>(3, 305));
//
//	cout << "����ǰ" << endl;
//	print(m);
//	print(m2);
//
//
//	m.swap(m2);
//	cout << "������" << endl;
//	print(m);
//	print(m2);
//
//
//
//}
////�����ɾ��
//void test3()
//{
//	map<int, int>m;
//	//��һ��
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��� ����дģ�����
//	m.insert(make_pair(2, 20));
//	//������
//	m.insert(map<int, int>::value_type(3, 30));
//	//������ ��������key������value
//	m[4] = 40;
//
//	cout << m[5] << endl;//���û�еĻ� �ͻ��Զ����һ����ֵ��
//
//	print(m);
//
//	m.erase(m.begin());
//	print(m);
//
//	m.erase(3);//����keyɾ��
//	print(m);
//
//	m.erase(m.begin(), m.end());
//
//}
////���Һ�ͳ�� find count
//void test4()
//{
//
//}
////���� �ı������������
//class mycom
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		//����
//		return v1 > v2;
//	}
//	mycom();
//	~mycom();
//
//private:
//
//};
//
//mycom::mycom()
//{
//}
//
//mycom::~mycom()
//{
//}
//void test5()
//{
//	map<int, int,mycom>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//
//	for (map<int, int, mycom>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first << it->second << endl;
//	}
//
//}
////Ա������
//class worker
//{
//public:
//	worker();
//	~worker();
//	string mname; int salary;
//private:
//
//};
//
//worker::worker()
//{
//}
//
//worker::~worker()
//{
//}
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//void createw(vector<worker>&v)
//{
//	string nameseed = "abcdefghij";
//	for (int i = 0; i < 10; i++)
//	{
//		worker worker;
//		worker.mname = "Ա��";
//		worker.mname += nameseed[i];
//
//		worker.salary = rand() % 10000 + 10000;//10000~19999
//		v.push_back(worker);
//	}
//}
//void setgroup(vector<worker>v,multimap<int,worker>&m)
//{
//	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ŵı��
//		int deptid = rand() % 3;
//		//��Ա�����������
//		//key���ű�ţ�value����Ա��
//		m.insert(make_pair(deptid, *it));
//	}
//}
//void showworker(multimap<int, worker>& m)
//{
//	//0 A B C D F G
//	cout << "�߻����ţ�" << endl;
//	multimap<int,worker>::iterator pos=m.find(CEHUA);
//	int count = m.count(CEHUA);//ͳ�ƾ�����ʶ
//	int index = 0;
//	for (; pos != m.end()&&index<count; index++,pos++)
//	{
//		cout << "����" << pos->second.mname << "����" << pos->second.salary << endl;
//
//	}
//	cout << "---------------" << endl;
//	cout << "�������ţ�" << endl;
//	pos = m.find(MEISHU); index = 0;
//	for (; pos != m.end() && index < count; index++, pos++)
//	{
//		cout << "����" << pos->second.mname << "����" << pos->second.salary << endl;
//
//	}
//	cout << "���ţ�" << endl;
//	cout << "---------------" << endl;
//	pos = m.find(YANFA); index = 0;
//	for (; pos != m.end() && index < count; index++, pos++)
//	{
//		cout << "����" <<  pos->second.mname << "����" << pos->second.salary << endl;
//
//	}
//
//
//}
//int main()
//{
//	//����Ա����
//	vector<worker> vworker;
//	createw(vworker);
//
//	//2��Ա������
//	multimap<int, worker>mworker;
//	setgroup(vworker,mworker);
//
//	//3����ʾԱ��
//	showworker(mworker);
//
//	/*for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
//	{
//		cout << "����" << it->mname << "����" << it->salary << endl;
//	}*/
//	return 0;
//}