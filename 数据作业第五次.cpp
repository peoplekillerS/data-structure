//#include<iostream>
//using namespace std;
//#include<set>
//bool flag2 = true;
//int main()
//{
//	cout << "�����������к���" << endl;
//	int m,n;
//	cin >> m >> n;
//	multiset <int>s[10];int arr[10][10];
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j]; s[i].insert(arr[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			bool flag = true;
//			if (arr[i][j] == *s[i].begin())
//			{
//				int k = 0;
//				while (k < m)
//				{
//					if (arr[i][j] < arr[k][j])
//					{
//						flag = false;
//						break;
//					}
//					k++;
//				}
//				if (flag)
//				{
//					flag2 = false;
//					cout << "������=" << i << "������" << j <<"ֵΪ="<< arr[i][j];
//					cout << endl;
//				}
//			}
//		}
//	}
//	if (flag2)
//	{
//		cout << "no" << endl;
//	}
//}