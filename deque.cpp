//#include<iostream>
//#include<deque>
//#include<algorithm>
//using namespace std;
////dequeͷ��ܷ��� ˫������
////�п���
////���������ٶȲ���vector
////deque��Ȼ֧���������
//
//void print(const deque<int> &d)
//{
//	//iteratorҲҪ����һ����
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;���ڲ������޸���
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	print(d2);
//
//	deque<int>d3(10, 1000);
//	print(d3);
//
//	deque<int>d4(d3);
//	print(d4);
//}
//void test2()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//
//	deque<int>d2;
//	d2 = d1;
//	print(d2);
//
//	//assign��ֵ
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	print(d3);
//
//	deque<int>d4;
//	d3.assign(10, 100);
//	print(d4);
//}
//void test3()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//
//	if (d1.empty())
//	{
//		cout << "true" <<endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//		cout << "d1�Ĵ�С" << d1.size() << endl;
//
//		//deque����û�������ĸ���
//	}
//
//	//����ָ����С
//	d1.resize(15, 1);
//	print(d1);
//
//	d1.resize(3);
//	print(d1);
//}
////deque���������ɾ�� �ṩ��λ��һ���ǵ�����
//void test4()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	print(d1);
//
//	//ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//	print(d1);
//
//	//βɾ
//	d1.pop_back();
//	print(d1);
//
//	//ͷɾ
//	d1.pop_front();
//	print(d1);
//}
//void test5()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//	print(d1);
//
//	d1.insert(d1.begin(), 1000);
//	print(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	print(d1);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.begin());
//	print(d1);
//
//
//
//}
////ɾ��
//void test6()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//
//
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	print(d1);
//
//	d1.erase(d1.begin(), d1.end());//�൱��clear
//	print(d1);
//
//}
////���ݴ�ȡ���� ��back �� front ��at
//void test7()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(40);
//	d.push_front(60);
//	d.push_front(50);
//
//	for (int i = 0; i < 6; i++)
//	{
//		cout << d[i] << " ";
//	}
//	//ͨ��at��ʽ����
//	for (int i = 0; i < d.size(); i++)
//	{
//
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//	cout << "��һ��Ԫ��" << d.front();
//	cout << "���һ��Ԫ��" << d.back();
//
//}
////deque������  sort(iterator beg,iterator end)
//void test8()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	print(d);
//	//���� Ĭ��������� ��С����
//	//����֧��������ʵĵ����� ����������sort�㷨ֱ�Ӷ����������
//	//vector����Ҳ��������sort��������
//	sort(d.begin(), d.end());
//	print(d);
//
//}
//int main()
//{
//	test8();
//}