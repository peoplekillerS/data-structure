//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////stirng ������һ���� char*��һ��ָ�� string ��һ���� ���ڲ���װchar* ��������ַ��� ��һ��char*�͵�����
//
////string �Ĺ��캯��
////string()                      ����һ���յ��ַ��� string str
////string (const char*s)         ʹ���ַ���s��ʼ��
////string (const string &str)    ʹ��һ��strinng �����ʼ����һ��string ����
////string (int n,char c)          ʹ��n���ַ���ʼ��
//
//void test01()
//{
//	string s1;
//
//	const char* str = "hello world";
//	string s2(str);
//
//	cout << "s2=" << s2 << endl;
//
//	string s3(s2);
//
//	cout << "s3=" << s3 << endl;
//
//	string s4(10, 'a');
//
//	cout << "s4=" << s4 << endl;
//
//
// }
//
////string��ֵ���� = �� assign
//void test02()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1=" << str1 << endl;
//
//	string str2;
//	str2 = str1;
//
//	string str3;
//	str3 = 'a';
//	cout << "s3=" << str3 << endl;
//
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4=" << str4 << endl;
//
//	string str5;
//	str5.assign("hello c++", 5);
//	cout << "str5=" << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7=" << str7 << endl;
//
//
//}
////�ַ���ƴ��
//void test03()
//{
//	string str1 = "��";
//	str1 += "������Ϸ";
//
//	cout << "str1=" << str1 << endl;
//
//	str1 += ':';
//	cout << "str1 =" << str1 << endl;
//	
//	string str2 = "LOL DNF";
//
//	str1 += str2;
//	cout << "str1=" << str1 << endl;
//
//	string str3 = "I";
//	str3.append("love");
//	cout << "str3=" << str3 << endl;
//
//	str3.append("game abced", 4);
//	cout << "str3=" << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3=" << str3<< endl;
//
//	str3.append(str2, 0, 3);
//	cout << "str3=" << str3 << endl;
//
//
//}
////���� 
////�滻
//void test04()
//{
//	string str1 = "abcdefg";
//	int pos=str1.find("de");
//	cout <<"pos="<< pos << endl;
//	if (pos == -1)
//	{
//		cout << "û�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ַ��� pos=" << pos << endl;
//	}
//
//	//rfind��find����
////rfind����������� find�������Ҳ���
//	pos = str1.rfind("de");
//
//	cout << "�ҵ��ַ��� pos=" << pos << endl;
//
//	
//
//}
////�滻
//void test05()
//{
//	string str1 = "abcdefg";
//	//��bcd����1111
//	str1.replace(1, 3, "1111");
//	cout << "str1=" << str1 << endl;
//}
////�Ƚ�
//void test06()
//{
//	//= 0
//	//> 1
//	//< -1
//	string str1 = "xello";
//	string str2 = "hello";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1����str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1����str2" << endl;
//	}
//	else
//	{
//		cout << "str1С��str2" << endl;
//
//	}
//}
////�ַ�����ȡ
//void test07()
//{
//	string str1 = "hello";
//	cout << "str=" << str1 << endl;
//	//1��ͨ���������ʵ����ַ�
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << " ";
//	}
//	cout << endl;
//	//2��ͨ��at�ķ�ʽ���ʵ����ַ�
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << " ";
//	}
//	cout << endl;
//	//�޸ĵ����ַ�
//	str1[0] = 'x';
//
//	str1.at(0) = 'x';
//
//}
////����  insert ��ɾ�� erase
//void test08()
//{
//	string str1 = "hello";
//	//����
//	str1.insert(1, "111");
//	cout << "str1=" << str1 << endl;
//
//	//ɾ��
//	str1.erase(1, 3);
//	cout << "str1=" << str1 << endl;
//}
////�ִ���ȡ substr ��ȡһС����Ҫ���ַ���
//void test09()
//{
//	string str = "abcde";
//	string substR = str.substr(1, 3);
//	cout << "substR=" << substR << endl;
//}
//void test10()
//{
//	string email = "hello@sina.com";
//	//���ʼ��ĵ�ַ��ȡ�û�������Ϣ
//	int pos = email.find("@");
//	string userName = email.substr(0, pos);
//	cout << userName << endl;
//}
//int main()
//{
//	test10();
//}