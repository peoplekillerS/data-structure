//#include<iostream>
//using namespace std;
////ջ������ �ͽ�ƥ��
//#include<stack>
////ɨ���ַ��� ������������� ֱ����ջ
////������������� ��ջ���������� �ж��Ƿ������� ���ƥ��ɹ�
//int isleft(char c)
//{
//	return c = '(';
//}
//int isright(char c)
//{
//	return c = ')';
//}
//int main()
//{
//	
//	string str = "1+2+6(dsf)dfsflp((sdfs)";
//	string p = str;
//	int index=0;
//	stack<char>s;
//	for (int i = 0; i < p.size(); i++)
//	{
//		if (isleft(p[i]))
//		{
//			s.push(p[i]);
//		}
//		if (isright(p[i]))
//		{
//			if (s.size() > 0)
//			{
//				s.top();
//				if (isleft(s.top()))
//				{
//					s.pop();
//				}
//			}
//			else
//			{
//				cout << "������û��ƥ��������" << endl;
//				for (int j = index; j < p.size(); j++)
//				{
//					cout << p[j];
//				}
//				cout << endl;
//			}
//		}
//		index++;
//	}
//	while (s.size() > 0)
//	{
//		cout << "��ûƥ���������" << endl;
//
//	}
//
//}