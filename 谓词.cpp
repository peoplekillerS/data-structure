//#include<iostream>
//#include<vector>
//#include<map>
//#include<list>
//#include<algorithm>
//using namespace std;
////operator����һ����������һԪν��
////operator������������������Ԫν��
//class dayuwu
//{
//public:
//	vector<int>v;
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//	dayuwu();
//	~dayuwu();
//
//private:
//
//};
//
//dayuwu::dayuwu()
//{
//}
//
//dayuwu::~dayuwu()
//{
//}
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//������������û�д���5������
//	//dayuwu()������������
//	vector<int>::iterator it=find_if(v.begin(), v.end(), dayuwu());//����������Ҫ����ν��
//	if (it == v.end())
//	{
//		cout << "no" << endl;
//	}
//	else
//	{
//		
//		cout << "yes" << *it<<endl;
//		
//	}
//
//
//
//}
////��Ԫν��
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
//void test2()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "_------------------" << endl;
//	//ʹ�ú������� �ı��㷨���� ��Ϊ�������Ӵ�С
//	sort(v.begin(), v.end(), mycom());//����������Ų��������ĺ�������
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test2();
//}