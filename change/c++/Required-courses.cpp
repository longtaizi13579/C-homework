#include<iostream>
#include<Required-courses.h>
#include<string>
#include<system.h>
using namespace std;
Required_course::Required_course(void)
{//���޿ι��캯��1
	classgrade = -1;
	sumgrade = 0.001;
}
Required_course::Required_course(string a, string b, int c, int d)
{//���޿ι��캯��2
	classnumber = a;
	classname = b;
	classgrade = c;
	weight = d;
	sumgrade = 0.001;
}
void Required_course::print(void)
{//���
	cout << "classnumber:";
	cout << classnumber << endl;
	cout << "classname:" ;
	cout << classname<< endl;
	cout << "weight:";
	cout << weight << endl;
}

void Required_course::gradecal(void)
{//���޿μ������
	system("cls");
	cout << "�γ����֣�" << classname << endl;
	cout << "������㷽ʽ��weight*classgrade/sumgrade" << endl;
	if (classgrade == -1)
		cout << "�ɼ�״̬��������" << endl;
	else
	{
		int sumgrade = 100;
		cout << "���ĸÿγ̷���Ϊ��" << classgrade << endl;
		cout << "���ĸÿγ̼���Ϊ��" << weight*classgrade / sumgrade << endl;
	}
}

void Required_course::inclassgrade(int grade)
{//��ʦ���ֽӿ�
	classgrade = grade;
	sumgrade = sumgrade + grade;
}
string Required_course::getclassnumber(void)
{//�ⲿ�õ�classnumber
	return classnumber;
}
string Required_course::getclassname(void)
{//�ⲿ�õ�classname
	return classname;
}
int Required_course::outclassgrade(void)
{//�ⲿ�õ�classgrade
	return classgrade;
}