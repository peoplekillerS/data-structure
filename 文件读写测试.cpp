//#include<iostream>
//#include <fstream>
//#include<istream>
//#include <string>
//using namespace std;
//
//void test01()
//{
//	//1������ͷ�ļ�fstream
//
//	//2������������
//	ofstream ofs;
//	//3��ָ���򿪷�ʽ
//	ofs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::out);
//	//4��д����
//	char line[80] = {0};
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	
//	//5���ر��ļ�
//	ofs.close();
//}
//
//void test02()
//{
//	//1������ͷ�ļ�
//	//2������������
//	ifstream ifs;ofstream ofs;
//	//3�����ļ��������ж��Ƿ�򿪳ɹ�
//	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::in);
//	
//	//3��ָ���򿪷�ʽ
//	
//
//
//	//4��������
//	//��һ��
//	/*char buf[2048] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << #include<iostream>
////#include<fstream>
////#include<string>
////using namespace std;
////typedef struct Animal
////{
////	struct Animal* next;
////	string name;
////	string  question;
////	Animal* yes, * no;
////
////}animalrec;
////string s1[50];
////int read_file()
////{
////	fstream ifs;
////	//3�����ļ��������ж��Ƿ�򿪳ɹ�
////	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::in | ios::out | ios::binary);
////	char line[80];
////	int i = 0;
////	while (ifs.getline(line, sizeof(line)))
////	{
////		s1[i] = line;
////		i++;
////	}
////	return i;
////}
////void addtext(char line1[80], char line2[80])
////{
////
////
////}
////animalrec* createnode(int &count)
////{
////	animalrec* head;
////	if (s1[count] == s1[6])
////	{
////		head = NULL;
////		count++;
////	}
////	else
////	{
////		head = new animalrec;
////		head->name = s1[count]; ++count;
////		head->question = s1[count]; ++count;
////		head->yes = createnode(count);
////		head->no = createnode(count);
////	}
////	return head;
////}
////void recursion(animalrec* head)
////{
////	if (!head)
////	{
////		return;
////	}
////	cout << "name=" << head->name << endl;
////	cout<< "question=" << head->question << endl;
////	recursion(head->yes);
////	recursion(head->no);
////}
////void addnode(animalrec*head)
////{
////	cout << "���������ֺͶ�Ӧ������" << endl;
////	head = new animalrec;
////	head->yes = NULL;
////	head->no = NULL;
////	char line1[80]; cin >> line1;
////	head->name = line1;
////	char line2[80]; cin >> line2;
////	head->question = line2;
////	addtext(line1,line2);
////}
////
////void putupquestion(animalrec*head)
////{
////	cout << "[Y/N] or E" << endl;
////	char ch;
////	while (cin >> ch)
////	{
////		if (ch == 'Y')
////		{
////			head = head->yes;
////			if (!head)
////			{
////
////				addnode(head);
////			}
////		}
////		if (ch == 'N')
////		{
////			head = head->no;
////			if (!head)
////			{
////
////				addnode(head);
////			}
////		}
////		if (ch == 'E')
////		{
////			break;
////		}
////		
////	}
////}
////int main()
////{
////	int sum = read_file();
////	int count = 0;
////	while (count < sum)
////	{
////		cout << s1[count] << endl;
////	}
////	//animalrec *root=createnode(count);
////	//recursion(root);
////	
////}endl;
//	}*/
//	//������
//	string buf; string s[100]; int i = 0;
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//		s[i] = buf; i++;
//	}
//	while (i--)
//	{
//		cout << s[i] << endl;;
//	}
//	//������
//	/*char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}*/
//
//
//	//5���ر��ļ�
//	ifs.close();
//
//}
//void test03()
//{
//	fstream ifs; 
//	//3�����ļ��������ж��Ƿ�򿪳ɹ�
//	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::in|ios::out|ios::binary);
//	char line[80];
//	string s1[40]; int i = 0;
//	while (ifs.getline(line, sizeof(line)))
//	{
//		s1[i] = line;
//		i++;	
//	}
//	while (i--)
//	{
//		cout << s1[i] << endl;
//	}
//	
//
//}
//int main()
//{
//	
//	test03();
//	system("pause");
//	return 0;
//}
