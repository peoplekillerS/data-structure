#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<algorithm>
#include<functional>
#include<numeric>
using namespace std;
//���ñ����㷨 for_each
void print01(int v)
{
	cout << v << " ";
}
class print02
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
	print02();
	~print02();

private:

};

print02::print02()
{
}

print02::~print02()
{
}
void test1()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}
	for_each(v.begin(), v.end(),print01);
	cout << endl;
	for_each(v.begin(), v.end(), print02());

}
//������������һ������
//���õı����㷨transform
//�ڰ��˵Ĺ����ж�ԭ����������ֵ��һЩ�Ӽ��˳�������
class Transform
{
public:
	int operator()(int v)
	{
		return v+100;
	}


private:

};
class mprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
	mprint();
	~mprint();

private:

};

mprint::mprint()
{
}

mprint::~mprint()
{
}

void test2()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	//���ٺÿռ�
	v2.resize(v.size());
	//���v���������ֵ�����º������������� �ٰѴ����Ľ���͵�v2����
	transform(v.begin(), v.end(), v2.begin(),Transform());
	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;
}
//find ����ָ��Ԫ�صĵ����� �Ҳ������ؽ���������end()
//����������������
void test3()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//�Ƿ���6
	vector<int>::iterator it=find(v.begin(), v.end(), 6);
	if (it == v.end())
	{
		cout << "wu" << endl;
	}
	else
	{
		cout << "zhe" << *it << endl;
	}
}
//�����Զ�����������

class person
{
public:
	person(string name, int age)
	{
		this->mage = age;
		this->mname = name;
	}
	//����== �õײ�find֪����ζԱ�person��������
	bool operator==(const person& p)
	{
		if (this->mage == p.mage)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	/*bool operator==(const person& p)
	{
		if (this->mage == p.mage && this->mname == p.mname)
		{
			return true;
		}
		else
		{
			return false;
		}
	}*/
	string mname; int mage;
private:

};

void test4()
{
	vector<person>v;
	person p1("aaa",10);
	person p2("bbb",20);
	person p3("ccc",30);
	person p4("ddd",40);
	person p5("yyy",50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	person pp("bbb", 20);
	vector<person>::iterator it = find(v.begin(), v.end(),pp);

	if (it == v.end())
	{
		cout << "wu" << endl;
	}
	else
	{
		cout << it->mname<<it->mage << endl;
	}



}
//find_if ���õĲ����㷨
//���ҳ��õ���������
//�������Ĳ���

class greaterfive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}

private:

};

void test5()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it=find_if(v.begin(), v.end(), greaterfive());
	if (it == v.end())
	{
		cout << "kong" << endl;
	}
	else
	{
		cout << "wei" << *it << endl;
	}
}
/// <summary>
///�����Զ�������
/// </summary>

class greaterr
{
public:
	bool operator()(person& p)
	{
		return p.mage > 20;
	}


private:

};
class greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
	greater20();
	~greater20();

private:

};

greater20::greater20()
{
}

greater20::~greater20()
{
}
void test6()
{
	vector<person>v;

	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("yyy", 50);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//�������Ĳ��� �ҵ��������20����
	vector<person>::iterator it = find_if(v.begin(), v.end(), greaterr());
	if (it == v.end())
	{
		cout << "kong" << endl;
	}
	else
	{
		cout <<it->mname<<it->mage<< endl;
	}

}
//���ò����㷨adjacent_find���������ظ���Ԫ��
void test7()
{
	vector<int>v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(20);
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(200);
	v.push_back(8);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << " �ҵ������ظ�Ԫ��" << *it << endl;
	}

}
//���õĲ����㷨 ����֪��Ԫ���Ƿ����
//binary_search
//������������ǲ����Ե� 
void test8()
{
	vector<int>v;
	//����Ϊ��������
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret=binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "yesy" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
}
//countͳ��Ԫ�ظ���
//ͳ���Զ���������������
void test9()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);

	int num=count(v.begin(), v.end(), 40);
	cout << "num=" << num;

}
void test10()
{
	
	vector<person>v;
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("yyy", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	person p("aaa", 30);
	//�����Ӳ�֪����ô���Ա�
	int num = count(v.begin(), v.begin(), p);
	cout << "��aaaͬ����������Ա����Ϊ��" <<num<< endl;
}
//ͳ��Ԫ�� �������� count_if
void test11()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	int num=count_if(v.begin(), v.end(), greater20());
	cout << "����20��Ԫ�ظ���Ϊ��" << num << endl;
}
//ͳ���Զ�����������
class agegreater20
{
public:
	bool operator()(const person& p)
	{
		return p.mage > 20;
	}
	agegreater20();
	~agegreater20();

private:

};

agegreater20::agegreater20()
{
}

agegreater20::~agegreater20()
{
}
void test12()
{
	vector<person>v;
	person p1("����", 3);
	person p2("�ܲ�", 20);
	person p3("����", 35);
	person p4("�ŷ�", 40);
	person p5("����", 35);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num=count_if(v.begin(), v.end(),agegreater20() );
	cout << "����20�����Ա����Ϊ" << num << endl;
}
//���õ������㷨 sort ����greaterȥ�ı�����
void test13()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

	//ģ���ĺ���greater �ı�Ϊ���� 
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), mprint());

}
//���������㷨 ϴ�� ��ָ����Χ�ڵ�Ԫ������������� random_shuffle
void test14()
{
	srand((unsigned int)time(NULL));


	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//����ϴ�� �㷨 ������˳��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

}

//���õ����� merge ���������ϲ� ���Ҵ��浽��һ������
//Ҫ������������������� merge֮��Ҳ�������
void test15()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int>vt;
	vt.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), vt.end(),mprint());
	cout << endl;



}
//reverse ��������Ԫ�ؾ��з�ת
void test16()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "��תǰ" << endl;
	for_each(v.begin(), v.end(), mprint());
	cout << endl;


	cout << "��תǰ" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

}
//���ÿ������滻�㷨 copy ����ָ����Χ��Ԫ�ؿ�������һ������
//���ø�ֵ���������� ��ǰ���ٿռ�
void test17()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);

	}
	vector<int>v2;
	//��ǰ���ٿռ�
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());


	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;

}
//replace �Ѿ�Ԫ�ظ�Ϊ��Ԫ�� ����������������Ķ��滻
void test18()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(240);
	v.push_back(25);
	v.push_back(20);
	v.push_back(201);
	v.push_back(2044);
	v.push_back(203);

	cout << "�滻ǰ" << endl;
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), mprint());

}
//replace_if �����滻
class greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
	greater30();
	~greater30();

private:

};

greater30::greater30()
{
}

greater30::~greater30()
{
}
void test19()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);
	v.push_back(10);
	v.push_back(60);
	v.push_back(90);

	for_each(v.begin(), v.end(), mprint());
	cout << endl;

	//�����ڵ���30���滻Ϊ100000
	replace_if(v.begin(), v.end(), greater30(), 10000);
	for_each(v.begin(), v.end(), mprint());
	cout << endl;


}
//swap ���������������� Ҫ����ͬ������
void test20()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	cout << "qian" << endl;
	for_each(v1.begin(), v1.end(), mprint());
	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;
	cout << "-----------------" << endl;
	cout << "hou" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), mprint());
	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;


}
//accumulate ���������ܺ������
void test21()
{
	vector<int>v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	//0��ʾ��ʼ����ֵ
	int total=accumulate(v.begin(), v.end(), 0);
	cout << "total" << total << endl;


}
//fill  ������������ָ��ֵ
void test22()
{
	vector<int>v;
	v.resize(10);

	//�����������
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), mprint());

}
/// <summary>
/// ���õļ����㷨
/// </summary>
/// �󽻼� ���� �
/// 
/// ����ǽ��� ������ڴ�
void test23()
{
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	
	}
	vector<int>vt;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	//��������� ����������С���� ���ٿռ� ȡС������size����
	vt.resize(min(v1.size(), v2.size()));

	//��ȡ����
	vector<int>::iterator itend = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), itend, mprint());
	cout << endl;




}
//set union �󼯺ϲ���
void test24()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);

	}
	vector<int>vt;

	//��ǰ���ٿռ�
	vt.resize(v1.size() + v2.size());
	vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	for_each(vt.begin(),itend, mprint());
	cout << endl;

}
//set difference����
//���������ϱ���Ϊ��������
void test25()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);

	}
	vector<int>vt;
	//��������� ��������û�н��� ȡ��������������size��ΪĿ�꿪�ٿռ�
	vt.resize(max(v1.size(), v2.size()));
	cout << "v1��v2�ĲΪ" << endl;
	vector<int>::iterator itend=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), itend, mprint());
	cout << endl;



}

int main()
{
	test24();
}