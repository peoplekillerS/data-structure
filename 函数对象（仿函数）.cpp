//#include<iostream>
//#include<vector>
//#include<map>
//#include<list>
//using namespace std;
//class myadd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//	myadd();
//	~myadd();
//
//private:
//
//};
//
//
////����������ʹ�õ�ʱ��Ҳ��������ͨ������������ �����в���
//void test1()
//{
//	myadd madd;
//	cout << madd(10, 10) << endl;
//}
//class myprint
//{
//public:
//	myprint()
//	{
//		this->count = 0;
//	}
//	~myprint();
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count;//�ڲ�״̬
//private:
//
//};
////��������������Լ���״̬
//void test2()
//{
//	myprint mprint;
//	mprint("Hello world");
//	mprint("Hello world");
//	mprint("Hello world");
//	mprint("Hello world");
//	cout << "myprint" << mprint.count << endl;
//}
////����������Ϊ�������д���
//void doprint(myprint &mp,string test)
//{
//
//}
//void test3()
//{
//	myprint mprint;
//	doprint(mprint, "hello c++");
//}
//int main()
//{
//	test3();
//}