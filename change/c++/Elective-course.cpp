#include<Elective-course.h>
#include<iostream>
#include<string>
#include<system.h>
using namespace std;
Elective_course::Elective_course(void)
{//ѡ�޿ι��캯��1
	classgrade = -1;
}
Elective_course::Elective_course(string a, string b, int c, int d)
{//ѡ�޿ι��캯��2
	classnumber = a;
	classname = b;
	classgrade = c;
	weight = d;
}
void Elective_course::print(void)
{//���
	cout << "classnumber:";
	cout << classnumber << endl;
	cout << "classname:";
	cout << classname << endl;
	cout << "weight:";
	cout << weight << endl;
}

void Elective_course::gradecal(void)//�������
{
	system("cls");
	cout << "�γ����֣�" << classname << endl;
	cout << "������㷽ʽ��weight*sqrt(classgrade)/10" << endl;
	if (classgrade == -1)
		cout << "�ɼ�״̬��������" << endl;
	else
	{
		cout << "���ĸÿγ̷���Ϊ��" << classgrade << endl;
		cout << "���ĸÿγ̼���Ϊ��" << weight*sqrt(classgrade) / 10 << endl;
	}
}
int Elective_course::outclassgrade(void)//�ⲿ�õ�����
{
	return classgrade;
}
void Elective_course::inclassgrade(int grade)//��ʦ���ֽӿڣ�
{
	classgrade = grade;
}
string Elective_course::getclassnumber(void)//�ⲿ�õ�classnumber
{
	return classnumber;
}
string Elective_course::getclassname(void)//�ⲿ�õ�classname
{
	return classname;
}