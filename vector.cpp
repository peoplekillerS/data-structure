//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
///// <summary>
///// STL ���� �㷨 �� ������
///// �������㷨ͨ���������޷��ν�
///// STL������ģ�����ģ�庯��
///// ������� ���� �㷨 ������ �º��� ������ �ռ�������
///// </summary>
///// <returns></returns>
///// 
///// vector �Ӵ��������������
///// 
//void print(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//������һ��vector���� ����
//	vector<int> v;
//
//	//�������д���������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ͨ����������������������
//	vector<int>::iterator itBegin = v.begin();//��ʼ������ ָ�������ĵ�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��
//
//
//	/*while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}*/
//	/*for (vector<int>::iterator it = v.begin(); it != v.end();it++)
//	{
//		cout << *it << endl;
//	}*/
//	//����STL���㷨
//	for_each(v.begin(), v.end(), print);
//}
///// <summary>
///// ����Զ�������
///// </summary>
///// <returns></returns>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->myname = name;
//		this->myage = age;
//	}
//	string myname;
//	int myage;
//};
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//
//	//����  it��һ��ָ��
//	for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
//    {
//		cout << "����" << (*it).myname << "����" << (*it).myage << endl;
//		cout << "����" << it->myname << "����" << it->myage << endl;
//
//	}
//
//}
//void test03()
//{
//	vector<Person*>v;
//	//˵�����������ഢ�� ���ǵ�ַ
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//β�巨
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//(*it)ָ�ľ���vector������Ǹ�����
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it)->myname << (*it)->myage << endl;
//	}
//
//}
////vectorǶ������ ��ά����
//void test04()
//{
//	vector<vector<int>>v;
//
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)��vector<int>���Ǹ��������Ϳ������������ʲô���� �Ǹ��������Ǹ�����
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//
//}
//
////vector��̬���� ��̬��չ  ��������ԭ���Ŀռ���¿ռ� 
////����ȥ�Ҹ�����ڴ�ռ� ��ԭ�������ݿ������ĵ׿ռ�����
//void printv(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test5()
//{
//	vector<int> v1;//Ĭ�Ϲ��� �޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//
//	//ͨ�����䷽ʽ���й���
//	vector<int>v2(v1.begin(), v1.end());
//	printv(v2);
//
//	//n��elem��ʽ����  ��һ���Ǹ��� �ڶ�����Ԫ��
//	vector<int>v3(10, 100);
//	printv(v3);
//
//	//��������
//	vector<int>v4(v3);
//	printv(v4);
//}
////vector�ĸ�ֵ
//void test6()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//	//���츳ֵ
//	vector<int>v2;
//	v2 = v1;
//	printv(v2);
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printv(v3);
//	//�͸ղŵĹ��첻һ�� ����Ǹ�ֵ
//	vector<int>v4;
//	v4.assign(10, 100);
//
//
//}
////vector �����ʹ�С�Ĳ���
//void test7()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//
//	if (v1.empty())
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1����Ϊ" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(15);//�������ذ汾 ����ָ��Ĭ�����
//	printv(v1);//�������ָ���ı�ԭ���� ��Ĭ����0����µ�λ��
//
//	v1.resize(5);//��������ɾ����
//	printv(v1);
//}
////vector�Ĳ����ɾ��
//void test8()
//{
//	//��������� 
//	vector<int>v1;
//	//β�巨
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	//����
//	printv(v1);
//
//	//βɾ pop_back
//	v1.pop_back();
//	printv(v1);
//
//	//����
//	v1.insert(v1.begin(), 100);
//	printv(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printv(v1);
//
//	v1.erase(v1.begin());
//	printv(v1);
//
//	v1.erase(v1.begin(), v1.end());
//	printv(v1);
//
//
//}
////vector��ȡ����
//void test9()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//��ȡ��һ��Ԫ��
//	cout << "��һ��Ԫ��" << v1.front() << endl;
//
//	//��ȡ���һ��
//	cout << "���һ��Ϊ" << v1.back() << endl;
//
//}
////�������� ����ʹ��
//void test10()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printv(v2);
//
//	cout << "������" << endl;
//	v1.swap(v2);
//	printv(v1);
//	printv(v2);
//}
////������ʵ����;
//void test11()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������" << v.capacity() << endl;
//	cout << "v�Ĵ�С" << v.size() << endl;
//
//	v.resize(3);
//
//	cout << "v�Ĵ�С" << v.size() << endl;
//
//	//����swapȥ�����ڴ�(������֮ǰ���ٶ��ˣ�
//	vector<int>(v).swap(v);
//	cout << "v������" << v.capacity() << endl;
//	cout << "v�Ĵ�С" << v.size() << endl;
//
//}
////vectorԤ���ռ� ����vector�ڶ�̬��չ�����ǵ���չ����
//void test12()
//{
//	vector<int>v;
//
//	//����reserveȥ���ٿռ�
//	v.reserve(100000);
//
//	int num = 0;//ͳ�ƿ��ٴ���
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//�׵�ַ
//		{
//			p = &v[0];
//			num++;
//		}//ÿ�β����þ�Ҫ���� Ȼ��ԭ��pָ���׵�ַ ����Ϊ���������Բ�ָ���� ��˾ݴ�ͳ��
//	}
//	cout << "num=" << num;
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
//
//	test12();
//}