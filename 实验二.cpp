//#include<iostream>
//#include<queue>
//#include<fstream>
//#include<iomanip>
//#include<string>
//using namespace std;
//bool judge_recursion = false;
//typedef struct Node {
//	string name="0";
//	string birthplace="0";
//	string birthtime="0";
//	string career="0";
//	string honor="0";
//	string gender="0";
//	string tall = "0";
//	string age = "0";
//	string number = "0";
//	string spouse = "0";
//	string generation = "0";
//	struct Node* left;
//	struct Node* right;
//	struct Node* middle;
//}node;
//void queue_wrtit_txt(node* head)
//{
//	fstream ifs; 
//	ifs.open("data.txt", ios::out | ios::in);
//	queue<node>q;
//	q.push(*head);
//	while (!q.empty())
//	{
//		node cur = q.front();
//		q.pop();
//		node* lc = cur.left;
//		node* mc = cur.middle;
//		node* rc = cur.right;
//		ifs << cur.number << " "  << cur.name << " " << cur.birthplace << " " << cur.birthtime << " " 
//			<< cur.career << " " << cur.gender <<" " << cur.honor << " "<< cur.age << " " << cur.tall<<
//			" "<<cur.spouse<<" "<<cur.generation << endl;
//		if (lc != NULL)q.push(*lc);
//		if (mc != NULL)q.push(*mc);
//		if (rc != NULL)q.push(*rc);
//	}
//	ifs.close();
//}
//void recursion_write_txt(node* head,fstream &ifs)
//{
//	
//	if (!head)
//	{
//		ifs << "0" << endl;
//		return;
//	}
//	ifs << head->number << " " << head->name << " " << head->birthplace << " " << head->birthtime << " " << head->career << " " << head->gender << " " <<
//		head->honor << " " << head->age << " " << head->tall<<" "<<head->spouse<<" " <<head->generation<< endl;
//	recursion_write_txt(head->left,ifs);
//	recursion_write_txt(head->middle,ifs);
//	recursion_write_txt(head->right,ifs);
//}
//void scanff(node* head,string s)
//{
//	head->number = s;
//	cin >> s;head->name = s;
//	cin >> s;head->birthplace = s;
//	cin >> s;head->birthtime = s;
//	cin >> s;head->career = s;
//	cin >> s; head->gender = s;
//	cin >> s;head->honor = s;
//	cin>>s;head->age= s;
//	cin >> s; head->tall = s;
//	cin >> s; head->spouse = s;
//	cin >> s; head->generation = s;
//}
//node *createnode_1()
//{
//	string s;node* head;
//	cin >> s;
//	if (s == "0")
//	{
//		head = NULL;
//	}
//	else
//	{
//		head = new node;
//
//		scanff(head, s);
//		head->left = createnode_1();
//		head->middle = createnode_1();
//		head->right = createnode_1();
//	}
//	return head;
//}
//node* createnode_2(fstream &ifs)
//{
//
//	node* head; string s; ifs >> s;
//	if (atoi(s.c_str())==0)
//	{
//		head = NULL;
//		
//	}
//	else
//	{
//		head = new node;
//		head->number = s; 
//		ifs >> s; head->name = s;
//		ifs >> s; head->birthplace = s;
//		ifs >> s; head->birthtime = s;
//		ifs >> s; head->career = s;
//		ifs >> s; head->gender = s;
//		ifs >> s; head->honor = s;
//		ifs >> s; head->age = s;
//		ifs >> s; head->tall = s;
//		ifs >> s; head->spouse = s;
//		ifs >> s; head->generation = s;
//		head->left = createnode_2(ifs);
//		head->middle = createnode_2(ifs);
//		head->right = createnode_2(ifs);
//	}
//	return head;
//}
//void revise()
//{
//	judge_recursion = false;
//}
//void find_person(node* head, string s,node*&p)
//{
//	
//	if (head == NULL)
//	{
//		return;
//	}
//	if (judge_recursion)
//	{
//		return;
//	}
//	if (head->name == s)
//	{
//		p = head;
//		judge_recursion = true;
//		return;
//	}
//	find_person(head->left, s,p);
//	find_person(head->middle, s,p);
//	find_person(head->right, s,p);
//	
//}
//void print(node* head)
//{
//	cout << "��"<<head->generation<<"�� " << "���:" << left << setw(5) << head->number << "������" << setw(8) << head->name << " " << "�����أ�" << setw(10) << head->birthplace << " " << "����ʱ�䣺"
//		<< setw(6) << head->birthtime << " " << "ְҵ��" << setw(12) << head->career << " " << "�Ա�" << setw(3) << head->gender << "ѧ����" << setw(22) << head->honor << " " <<
//		"���䣺" << setw(4) << head->age << "��ߣ�" << head->tall<<" " << "��ż" << setw(6) << head->spouse << endl;
//}
//void recursion_print(node *head)
//{
//	if (!head)return;
//	print(head);
//	recursion_print(head->left);
//	recursion_print(head->middle);
//	recursion_print(head->right);
//}
////ֻ������˵�ȷ���ڵ�����²ſ��Ը�
//void recursion_revise(node *head,string name)
//{
//	node* r;find_person(head, name,r); revise();
//	cout << "���ڱ������ø�����ѡ����ĵĻ�һ�θ���� �����ж�������һ��" << endl;
//	cout << " �밴��˳������ý���������:number name birthplace birthtime career honor gender age tall spouse generation" << endl;
//	string s; cin >> s;
//	scanff(r, s);
//}
////���� Ҫ��ȷ��˭����Ů ��ȷ�ز���˭������
//void recursion_insert(node*head,string name)
//{
//	node* r; find_person(head, name, r); revise();
//	cout << " �밴��˳�������½�������:number name birthplace  birthtime career gender honor age tall spouse generation" << endl;
//	string s; cin >> s;
//	if (!r->left)
//	{
//		r->left = new node; r->left->left = NULL; r->left->middle = NULL; r->left->right = NULL;
//		scanff(r->left, s); cout << "-----" << endl;
//	}
//	else if(!r->middle)
//	{
//		r->middle = new node; r->middle->left = NULL; r->middle->middle = NULL; r->middle->right = NULL;
//		scanff(r->middle, s);
//	}
//	else if(!r->right)
//	{
//		r->right = new node; r->right->left = NULL; r->right->middle = NULL; r->right->right = NULL;
//		scanff(r->right, s);
//	}
//	cout << "��������Ů�� ��ֻ������������� ��������ʾ�������ֶ��������" << endl;
//	
//}
//void recursion_delete(node *head, string name)
//{
//	if (!head)return;node* p; 
//	if (judge_recursion)return;
//	if (head->left)
//	{
//		if (head->left->name == name)
//		{
//			judge_recursion = true;
//			p = head->left; delete p;
//			head->left = NULL;
//		}
//		
//	}
//	if (head->middle)
//	{
//		if (head->middle->name == name)
//		{
//			judge_recursion = true;
//			p = head->middle; delete p;
//			head->middle = NULL;
//		}
//	}
//	if (head->right)
//	{
//		if (head->right->name == name)
//		{
//			judge_recursion = true;
//			p = head->right; delete p;
//			head->right = NULL;
//		}
//	}
//	
//	recursion_delete(head->left, name);
//	recursion_delete(head->middle, name);
//	recursion_delete(head->right, name);
//
//}
//void  average_tall(node* head,int &num)
//{
//	if (head == NULL)
//	{
//		return;
//
//	}
//	num += atoi(head->tall.c_str());
//	average_tall(head->left,num);
//	average_tall(head->middle,num);
//	average_tall(head->right,num);
//}
//void  average_age(node* head, int &num)
//{
//	if (head == NULL)
//	{
//		return;
//
//	}
//	
//	num += atoi(head->age.c_str());
//	average_age(head->left, num);
//	average_age(head->middle, num);
//	average_age(head->right, num);
//	
//}
//void search_gender(node* head, int& num, int& num2)
//{
//	if (head == NULL)
//	{
//		return;
//	}
//	if (atoi(head->gender.c_str()) == 1) { num += 1; }
//	else { num2 += 1; }
//	search_gender(head->left, num,num2);
//	search_gender(head->middle, num,num2);
//	search_gender(head->right, num,num2);
//	
//}
//void print_level(node* head)
//{
//	queue<node>q;
//	q.push(*head);
//	while (!q.empty())
//	{
//		node cur = q.front();
//		q.pop();
//		node* lc = cur.left;
//		node* mc = cur.middle;
//		node* rc = cur.right;
//		if (lc != NULL)q.push(*lc);
//		if (mc != NULL)q.push(*mc);
//		if (rc!=NULL)q.push(*rc);
//		print(&cur);
//	}
//}
//int sum_people()
//{
//	int i = 0; fstream ifs; char line[100];
//	ifs.open("familytree.txt", ios::out | ios::in);
//	while (ifs.getline(line, sizeof(line)))
//	{
//
//		string s = line;
//		if (atoi(s.c_str()) != 0)
//		{
//			i++;
//		}
//	}
//	ifs.close();
//	return i;
//}
//void print_like_tree(node* head)
//{
//	queue<node>q;
//	queue<node>qq;
//	q.push(*head);
//	qq.push(*head);
//	while (!q.empty())
//	{
//		node cur = q.front(); q.pop();
//		node* lc = cur.left;
//		node* mc = cur.middle;
//		node* rc = cur.right;
//		if (lc != NULL) { q.push(*lc); qq.push(*lc); }
//		if (mc != NULL) { q.push(*mc); qq.push(*mc); }
//		if (rc != NULL) { q.push(*rc); qq.push(*rc); }
//		
//	}
//	cout << right;
//	cout << setw(60) << qq.front().name << endl; qq.pop();
//	cout << setw(40) << qq.front().name; qq.pop();
//	cout << setw(40) << qq.front().name; qq.pop();
//	cout << setw(40) << qq.front().name << endl; qq.pop();
//	cout << setw(60) << qq.front().name << endl; qq.pop();
//	cout << setw(40) << qq.front().name; qq.pop();
//	cout << setw(40) << qq.front().name; qq.pop();
//	cout << setw(40) << qq.front().name << endl; qq.pop();
//	cout << setw(20) << qq.front().name; qq.pop();
//	cout << setw(20) << qq.front().name; qq.pop();
//	cout << setw(20) << qq.front().name; qq.pop();
//	cout << setw(20) << qq.front().name; qq.pop();
//	cout << setw(20) << qq.front().name << endl; qq.pop();
//	cout << setw(40) << qq.front().name; qq.pop();
//	cout << setw(40) << qq.front().name; qq.pop();
//	cout << setw(40) << qq.front().name << endl; qq.pop();
//}
//void check_family(node* head)
//{
//	node collection[40];
//	queue<node>qq; queue<node>q;
//	q.push(*head); qq.push(*head);
//	int count = 0;
//	while (!q.empty())
//	{
//		node cur = q.front(); q.pop();
//		node* lc = cur.left;
//		node* mc = cur.middle;
//		node* rc = cur.right;
//		collection[count] = cur;
//		if (lc != NULL) { q.push(*lc); qq.push(*lc); }
//		if (mc != NULL) { q.push(*mc); qq.push(*mc); }
//		if (rc != NULL) { q.push(*rc); qq.push(*rc); }
//		count++;
//	}
//	string s; cout << "��������Թ�ϵ�ı�������" << endl;
//	while (cin >> s)
//	{
//
//		cout << "��Ĭ�Ϸ�����ż��1����үү 2��үү 3үү 4���� 5�������� 6������ 7���� 8���� 9��Ů 10�˾� 11ֶ�� 12���� ��������Թ�ϵ" << endl;
//		int judge = 0; cin >> judge; bool judge_availabity = false; bool judge_1 = false, judge_2 = false, judge_3 = false;
//		int label = 0, count_2 = 0;
//		for (int j = 0; j < count; j++)
//		{
//			if (collection[j].name == s)
//			{
//				label = j; break;
//			}
//		}
//		switch (judge)
//		{
//		case 1://����үү
//			if (atoi(collection[label].generation.c_str()) <= 4) { cout << "����ֻ�������� ��δ��¼ǰ�Ĵ��˵������游" << endl; }
//			else
//			{
//				for (int j = 0; j < count; j++)
//				{
//					if (atoi(collection[label].generation.c_str()) - atoi(collection[j].generation.c_str()) == 4)
//					{
//						cout << collection[label].name << ":" << "�����游:" << collection[j].name << endl;
//						if (collection[j].spouse == "0")
//						{
//							cout << "�����游û����ż" << endl;
//						}
//						else {
//							cout << "������ĸ" << collection[j].spouse << endl;
//						}
//					}
//				}
//			}
//			break;
//		case 2://��үү
//			if (atoi(collection[label].generation.c_str()) <= 3) { cout << "����ֻ�������� ��δ��¼ǰ�����˵����游" << endl; }
//			else
//			{
//				for (int j = 0; j < count; j++)
//				{
//					if (atoi(collection[label].generation.c_str()) - atoi(collection[j].generation.c_str()) == 3)
//					{
//						cout << collection[label].name << ":" << "���游:" << collection[j].name << endl;
//						if (collection[j].spouse == "0")
//						{
//							cout << "���游û����ż" << endl;
//						}
//						else {
//							cout << "����ĸ" << collection[j].spouse << endl;
//						}
//					}
//				}
//			}
//			break;
//		case 3://үү ����
//			if (atoi(collection[label].generation.c_str()) <= 2) { cout << "����ֻ�������� ��δ��¼ǰ�����˵��游" << endl; }
//			else
//			{
//				for (int j = 0; j < count; j++)
//				{
//					if (atoi(collection[label].generation.c_str()) - atoi(collection[j].generation.c_str()) == 2)
//					{
//						cout << collection[label].name << ":" << "�游:" << collection[j].name << endl;
//						if (collection[j].spouse == "0")
//						{
//							cout << "�游û����ż" << endl;
//						}
//						else {
//							cout << "��ĸ" << collection[j].spouse << endl;
//						}
//					}
//				}
//			}
//			break;
//		case 4://���� ĸ��
//			if (atoi(collection[label].generation.c_str()) == 1) { cout << "��δ��������һ���������ϱ��ֵ���" << endl; break; }
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name == s) { judge_1 = true; }
//				}
//				if (collection[j].middle != NULL) { if (collection[j].middle->name == s) { judge_2 = true; } }
//				if (collection[j].right != NULL) { if (collection[j].right->name == s) { judge_3 = true; } }
//				if (judge_1||judge_2||judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (atoi(collection[label].generation.c_str()) - atoi(collection[j].generation.c_str()) == 1&&judge_availabity)
//				{
//					cout << collection[label].name << ":" << "����:" << collection[j].name << endl;
//					if (collection[j].spouse == "0")
//					{
//						cout << "����û����ż" << endl;
//					}
//					else {
//						cout << "ĸ��" << collection[j].spouse << endl;
//					}
//					break;
//				}
//			}
//			break;
//		case 5://��������
//			if (atoi(collection[label].generation.c_str()) >= 3) { cout << "����ֻ�������� ��δ��¼����ǰ�����˵�������" << endl; }
//			else
//			{
//				for (int j = 0; j < count; j++)
//				{
//					if (atoi(collection[j].generation.c_str())-atoi(collection[label].generation.c_str()) == 4)
//					{
//						cout << collection[label].name << ":" << "��������:" << collection[j].name << endl;
//						if (collection[j].spouse == "0")
//						{
//							cout << "��������û����ż" << endl;
//						}
//						else {
//							cout << "�������ӵ���ż" << collection[j].spouse << endl;
//						}
//					}
//				}
//			}
//			break;
//		case 6://������
//			if (atoi(collection[label].generation.c_str()) >= 4) { cout << "����ֻ�������� ��δ��¼����ǰ�����˵�������" << endl; }
//			else
//			{
//				for (int j = 0; j < count; j++)
//				{
//					if (atoi(collection[j].generation.c_str()) - atoi(collection[label].generation.c_str()) == 3)
//					{
//						cout << collection[label].name << ":" << "������:" << collection[j].name << endl;
//						if (collection[j].spouse == "0")
//						{
//							cout << "������û����ż" << endl;
//						}
//						else {
//							cout << "�����ӵ���ż" << collection[j].spouse << endl;
//						}
//					}
//				}
//			}
//			break;
//		case 7://����
//			if (atoi(collection[label].generation.c_str()) == 1) { cout << "��δ��������һ���������ϱ��ֵ���" << endl; break; }
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name != s) { judge_1 = true; }
//				}
//				if (collection[j].middle != NULL) { if (collection[j].middle->name != s) { judge_2 = true; } }
//				if (collection[j].right != NULL) { if (collection[j].right->name != s) { judge_3 = true; } }
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if ( judge_availabity)
//				{
//					count_2 = j;
//					
//				}
//			}
//			judge_availabity = false;
//			for (int j = 1; j < count; j++)
//			{
//				
//				if (atoi(collection[label].generation.c_str()) - atoi(collection[j].generation.c_str()) == 1 && j<count_2&&collection[j].gender=="1")
//				{
//					cout << collection[label].name << ":" << "����:" << collection[j].name << endl;
//					judge_availabity = true;
//					if (collection[j].spouse == "0")
//					{
//						cout << "����û����ż" << endl;
//					}
//					else {
//						cout << "����" << collection[j].spouse << endl;
//					}
//				}
//			}
//			if (!judge_availabity)
//			{
//				cout << "�޲���" << endl;
//			}
//			break;
//		case 8://����
//			if (atoi(collection[label].generation.c_str()) == 1) { cout << "��δ��������һ���������ϱ��ֵ���" << endl; break; }
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name == s) { judge_1 = true; }
//				}
//				if (collection[j].middle != NULL) { if (collection[j].middle->name == s) { judge_2 = true; } }
//				if (collection[j].right != NULL) { if (collection[j].right->name == s) { judge_3 = true; } }
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (atoi(collection[label].generation.c_str()) - atoi(collection[j].generation.c_str()) == 1 && judge_availabity)
//				{
//					count_2 = j;
//				}
//			}
//			judge_availabity = false;
//			for (int j = 1; j < count; j++)
//			{
//
//				if (atoi(collection[label].generation.c_str()) - atoi(collection[j].generation.c_str()) == 1 && j>count_2)
//				{
//					cout << collection[label].name << ":" << "����:" << collection[j].name << endl;
//					judge_availabity = true;
//					if (collection[j].spouse == "0")
//					{
//						cout << "����û����ż" << endl;
//					}
//					else {
//						cout << "��ĸ" << collection[j].spouse << endl;
//					}
//				}
//			}
//			if (!judge_availabity)
//			{
//				cout << "�޲���" << endl;
//			}
//			break;
//		case 9://���� Ů��
//			if (atoi(collection[label].generation.c_str()) == atoi(collection[count-1].generation.c_str())) { cout << "��δ����������һ���������ϱ��ֵ���" << endl; break; }
//			if (collection[label].left != NULL) 
//			{ 
//				cout << collection[label].name << "��Ů��" << collection[label].left->name << endl; 
//				if (collection[label].left->spouse=="0")
//				{
//					cout << "��Ůû����ż" << endl;
//				}
//				else {
//					cout << "��Ů����ż" << collection[label].left->spouse << endl;
//				}
//			}
//			if (collection[label].middle != NULL) 
//			{
//				cout << collection[label].name << "��Ů��" << collection[label].middle->name << endl; 
//				if (collection[label].middle->spouse == "0")
//				{
//					cout << "��Ůû����ż" << endl;
//				}
//				else {
//					cout << "��Ů����ż" << collection[label].middle->spouse << endl;
//				}
//			}
//			if (collection[label].right != NULL)
//			{ 
//				cout << collection[label].name << "��Ů��" << collection[label].right->name << endl;
//				if (collection[label].right->spouse == "0")
//				{
//					cout << "��Ůû����ż" << endl;
//				}
//				else {
//					cout << "��Ů����ż" << collection[label].right->spouse << endl;
//				}
//			}
//			break;
//		case 10://�˾� ����
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name == s) { judge_1 = true; }
//				}
//				if (collection[j].middle != NULL) { if (collection[j].middle->name == s) { judge_2 = true; } }
//				if (collection[j].right != NULL) { if (collection[j].right->name == s) { judge_3 = true; } }
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (judge_availabity)
//				{
//					count_2 = j; break;
//				}
//				judge_1 = false;judge_2 = false;judge_3 = false;
//			}
//			judge_1 = false; judge_2 = false; judge_3 = false; judge_availabity = false;
//			s = collection[count_2].name; cout << "name" << s << endl;
//			if (atoi(collection[count_2].gender.c_str()) == 1) { cout << "��û�м��ش��˾˾� " << endl; }
//			else {
//				for (int j = 0; j < count; j++)
//				{
//					if (collection[j].left != NULL) {if (collection[j].left->name == s) { judge_1 = true; }}
//					if (collection[j].middle != NULL) { if (collection[j].middle->name == s) { judge_2 = true; } }
//					if (collection[j].right != NULL) { if (collection[j].right->name == s) { judge_3 = true; } }
//					if (judge_1 || judge_2 || judge_3){judge_availabity = true;	count_2 = j; }
//					if (judge_availabity)
//					{
//						count_2 = j; break;
//					}
//					judge_1 = false;judge_2 = false;judge_3 = false;
//				}
//				judge_1 = false; judge_2 = false; judge_3 = false; judge_availabity = false;
//				cout << "name" << collection[count_2].name << endl;
//				if (collection[count_2].left != NULL) {
//					if (collection[count_2].left->name != s && collection[count_2].left->gender == "1") { cout << "�˾���" << collection[count_2].left->name << endl; judge_1 = true; }
//				}
//				if (collection[count_2].middle != NULL) { if (collection[count_2].middle->name != s && collection[count_2].middle->gender == "1") { cout << "�˾���" << collection[count_2].middle->name << endl; judge_2 = true; } }
//				if (collection[count_2].right != NULL) { if (collection[count_2].right->name != s&& collection[count_2].middle->gender == "1") { cout << "�˾���" << collection[count_2].right->name << endl; judge_3 = true; } }
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (!judge_availabity) {
//					cout << "û�о˾�" << endl;
//				}
//			}
//			break;
//		case 11://ֶ�� Ů
//			if (collection[label].gender == "1") { cout << "������ֶ��ֶŮ" << endl; break; }
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name == s) { judge_1 = true; }
//				}
//				if (collection[j].middle != NULL) { if (collection[j].middle->name == s) { judge_2 = true; } }
//				if (collection[j].right != NULL) { if (collection[j].right->name == s) { judge_3 = true; } }
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (judge_availabity)
//				{
//					count_2 = j; break;
//				}
//			}
//			judge_1 = false; judge_2 = false; judge_3 = false; judge_availabity = false;
//			s = collection[count_2].name;
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name != s&&collection[j].left->gender=="1") { 
//						if (collection[j].left->left != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].left->left->name << endl;
//							judge_1 = true;
//						}
//						if (collection[j].left->middle != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].left->middle->name << endl;
//							judge_1 = true;
//						}
//						if (collection[j].left->right != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].left->right->name << endl;
//							judge_1 = true;
//						}
//					}
//				}
//				if (collection[j].middle != NULL) { 
//					if (collection[j].middle->name != s&& collection[j].middle->gender == "1") { 
//						if (collection[j].middle->left != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].middle->left->name << endl;
//							judge_2 = true;
//						}
//						if (collection[j].middle->middle != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].middle->middle->name << endl;
//							judge_2 = true;
//						}
//						if (collection[j].middle->right != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].middle->right->name << endl;
//							judge_2 = true;
//						}
//					} 
//				}
//				if (collection[j].right != NULL) { 
//					if (collection[j].right->name != s&& collection[j].right->gender == "1") {
//						if (collection[j].right->left != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].right->left->name << endl;
//							judge_3 = true;
//						}
//						if (collection[j].right->middle != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].right->middle->name << endl;
//							judge_3 = true;
//						}
//						if (collection[j].right->right != NULL)
//						{
//							cout << "ֶ��ֶŮ" << collection[j].right->right->name << endl;
//							judge_3 = true;
//						}
//					}
//				}
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (judge_availabity)
//				{
//					cout << "��ֶ��ֶŮ" << endl; break;
//				}
//			}
//			break;
//		case 12://���� Ů
//			if (collection[label].gender == "2") { cout << "������ֶ��ֶŮ" << endl; break; }
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name == s) { judge_1 = true; }
//				}
//				if (collection[j].middle != NULL) { if (collection[j].middle->name == s) { judge_2 = true; } }
//				if (collection[j].right != NULL) { if (collection[j].right->name == s) { judge_3 = true; } }
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (judge_availabity)
//				{
//					count_2 = j; break;
//				}
//			}
//			judge_1 = false; judge_2 = false; judge_3 = false; judge_availabity = false;
//			s = collection[count_2].name;
//			for (int j = 0; j < count; j++)
//			{
//				if (collection[j].left != NULL) {
//					if (collection[j].left->name != s && collection[j].left->gender == "2") {
//						if (collection[j].left->left != NULL)
//						{
//							cout << "���� Ů" << collection[j].left->left->name << endl;
//							judge_1 = true;
//						}
//						if (collection[j].left->middle != NULL)
//						{
//							cout << "���� Ů" << collection[j].left->middle->name << endl;
//							judge_1 = true;
//						}
//						if (collection[j].left->right != NULL)
//						{
//							cout << "���� Ů" << collection[j].left->right->name << endl;
//							judge_1 = true;
//						}
//					}
//				}
//				if (collection[j].middle != NULL) {
//					if (collection[j].middle->name != s && collection[j].middle->gender == "2") {
//						if (collection[j].middle->left != NULL)
//						{
//							cout << "���� Ů" << collection[j].middle->left->name << endl;
//							judge_2 = true;
//						}
//						if (collection[j].middle->middle != NULL)
//						{
//							cout << "���� Ů" << collection[j].middle->middle->name << endl;
//							judge_2 = true;
//						}
//						if (collection[j].middle->right != NULL)
//						{
//							cout << "����Ů" << collection[j].middle->right->name << endl;
//							judge_2 = true;
//						}
//					}
//				}
//				if (collection[j].right != NULL) {
//					if (collection[j].right->name == s && collection[j].right->gender == "2") {
//						if (collection[j].right->left != NULL)
//						{
//							cout << "����Ů" << collection[j].right->left->name << endl;
//							judge_3 = true;
//						}
//						if (collection[j].right->middle != NULL)
//						{
//							cout << "����Ů" << collection[j].right->middle->name << endl;
//							judge_3 = true;
//						}
//						if (collection[j].right->right != NULL)
//						{
//							cout << "���� Ů" << collection[j].right->right->name << endl;
//							judge_3 = true;
//						}
//					}
//				}
//				if (judge_1 || judge_2 || judge_3)
//				{
//					judge_availabity = true;
//				}
//				if (!judge_availabity)
//				{
//					cout << "������ Ů" << endl; break;
//				}
//			}
//			break;
//		default:
//			return;
//		}
//		cout << "��������" << endl;
//	}
//}
//void operation_selection(node*root)
//{
//	string s;
//	int number = 1; fstream ifs;
//	cout << "��������������������Ҫ�Ĳ���" << endl;
//	cout << "1�����ṹ��� 2������� 3�޸���Ϣ 4�������ˣ��½��) 5ɾ�����ˣ�ԭ�н�㣩" << endl;
//	cout << "6 ���������� ���䡢���ƽ�� 8���ݹ�д�� 9������д�� 0�����ݹ�ϵ��ѯ" << endl;
//	while (cin >> number)
//	{
//		node* p, * r; int num = 0, num2 = 0;
//		switch (number) {
//		case 0:
//			//print_like_tree(root);
//			check_family(root);
//			break;
//		case 1:
//			recursion_print(root);
//			break;
//		case 2:
//			print_level(root);
//			break;
//		case 3:
//			cout << "��������ȥ�޸Ķ�Ӧ����Ϣ" << endl;
//			cin >> s;
//			recursion_revise(root, s); revise();
//			cout << "--------------��������������Ƿ�����ɹ�--------------" << endl;
//			print_level(root);
//			cout << "--------------��������������Ƿ�����ɹ�--------------" << endl;			break;
//		case 4:
//			cout << "��������ȥ����ĳĳĳ����Ů" << endl;
//			cin >> s;
//			recursion_insert(root, s); revise();
//			cout << "--------------��������������Ƿ�����ɹ�--------------" << endl;
//			print_level(root);
//			cout << "--------------��������������Ƿ�����ɹ�--------------" << endl;
//			break;
//
//
//		case 5:
//			cout << "��������ɾ�����˵�����" << endl;
//			cin >> s;
//			recursion_delete(root, s); revise();
//			cout << "--------------��������������Ƿ�����ɹ�--------------" << endl;
//			print_level(root);
//			cout << "--------------��������������Ƿ�����ɹ�--------------" << endl;
//			break;
//		case 6:
//			//������������ ��΢��һ������Ҳ���Ա�ɸı���ȥ����
//			cout << "����������Ҫ�ҵ��˵�����" << endl;
//			cin >> s; p = root;
//			find_person(p, s, r);
//			print(r); revise();
//			break;
//		case 7:
//			
//			num = 0; average_age(root, num);
//			cout << "ƽ������" << num/ sum_people() << endl; num = 0;
//			average_tall(root, num);
//			cout << "ƽ�����" << num / sum_people() << endl; num = 0;
//			num2 = 0;
//			search_gender(root, num, num2);
//			cout << "��Ů����" << num << ":" << num2 << endl;
//			num = 0; num2 = 0;
//			break;
//		case 8:
//			ifs.open("recursion.txt", ios::out | ios::in);
//			recursion_write_txt(root,ifs);
//			ifs.close();
//			cout << "-------д����----------" << endl;
//			break;
//		case 9:
//			queue_wrtit_txt(root);
//			cout << "-------д����----------" << endl;
//			break;
//		default:
//			return ;
//		}
//		cout << "��������ѡ����� 1�����ṹ��� 2������� 3�޸���Ϣ 4�������ˣ��½��) 5ɾ�����ˣ�ԭ�н�㣩" << endl;
//		cout << "6 ���������� 7����Ҫ��Ĺ��� ������ƽ�����ƽ�� 8���ݹ�д�� 9������д��" << endl;
//	}
//}
//node* tree_init()
//{
//	cout <<"�ֶ���������0 ���̶�ȡ����10 ��������ÿ���˵���Ϣ ��ʼ�������� "<< endl;
//	int judge = 0; cin >> judge; int count = 0; node* root,*p; 
//	if (!judge)root = createnode_1();
//	else {
//		fstream ifs; ifs.open("familytree.txt", ios::out | ios::in);
//		root = createnode_2(ifs); 
//	}
//	
//	return root;
//}
//int main()
//{
//	node* root = tree_init();
//	operation_selection(root);
//	return 0;
//}