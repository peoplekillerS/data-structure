//#include<iostream>
//#include<deque>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//class Person
//{
//public:
//	string mname; int mscore;
//	Person(string name, int score)
//	{
//		this->mname = name;
//		this->mscore = score;
//	}
//};
//void create(vector<Person>& v)
//{
//	string nameseed = "abcde";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameseed[i];
//		int score = 0;
//
//		Person p(name, score);
//
//		v.push_back(p);
//	}
//}
//void setscore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����ί�����Ž�ȥdeque
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		
//		/*cout << " ����" << (*it).mname << "����" <<endl;
//
//		for (deque<int>::iterator vit = d.begin(); vit != d.end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout<<endl;*/
//
//		//����
//		sort(d.begin(), d.end());
//		//ȥ��������
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//
//		int avg = sum / d.size();
//
//		it->mscore = avg;
//
//	}
//}
//void show(vector<Person>&p)
//{
//	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "����" << it->mname << "ƽ���֣�" << it->mscore << endl;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1���������ѡ��
//	vector<Person>v;
//	create(v);
//
//	//����
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << " ����" << (*it).mname << "����" << (*it).mscore << endl;
//	}*/
//	//2��������˴��
//	setscore(v);
//
//	show(v);
//	//3����ʾ���÷�
//}
