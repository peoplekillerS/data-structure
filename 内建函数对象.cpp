//#include<iostream>
//#include<vector>
//#include<map>
//#include<list>
//#include<algorithm>
//#include<functional>//�ڽ���������ͷ�ļ�
//using namespace std;
////negate��һԪ���� ������������㶼�Ƕ�Ԫ����
////negate����ȡ���º���
////���������º���
//void test1()
//{
//	negate<int>n;
//
//	cout << n(50) << endl;
//}
////��Ԫ �ӷ�
//void test2()
//{
//	plus<int>p;
//
//	cout << p(10, 20) << endl;
//}
////��ϵ�º��� ���ڲ����� ���ڵ���С�ڵ���
//
//class mycom
//{
//public:
//	bool operator()(int v1, int v2)
//	{
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
//void test3()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//����
//	sort(v.begin(),v.end(), greater<int>());//��������������º��� ʵ����
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//}
////�߼��º��� ��Ҫʵ���߼�����
//void test4()
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//�����߼��� ������v���˵�����v2�� ��ִ��ȡ������
//	vector<bool>v2;
//	v2.resize(v.size());//��ǰ���ٿռ�
//	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test5()
//{
//
//}
//void test6()
//{
//
//}
//void test7()
//{
//
//}
//void test8()
//{
//
//}
//void test9()
//{
//
//}
//
//int main()
//{
//	test4();
//}