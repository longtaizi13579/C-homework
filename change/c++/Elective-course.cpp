#include<Elective-course.h>
#include<iostream>
#include<string>
#include<system.h>
using namespace std;
Elective_course::Elective_course(void)
{//选修课构造函数1
	classgrade = -1;
}
Elective_course::Elective_course(string a, string b, int c, int d)
{//选修课构造函数2
	classnumber = a;
	classname = b;
	classgrade = c;
	weight = d;
}
void Elective_course::print(void)
{//输出
	cout << "classnumber:";
	cout << classnumber << endl;
	cout << "classname:";
	cout << classname << endl;
	cout << "weight:";
	cout << weight << endl;
}

void Elective_course::gradecal(void)//绩点计算
{
	system("cls");
	cout << "课程名字：" << classname << endl;
	cout << "绩点计算方式：weight*sqrt(classgrade)/10" << endl;
	if (classgrade == -1)
		cout << "成绩状态：待评分" << endl;
	else
	{
		cout << "您的该课程分数为：" << classgrade << endl;
		cout << "您的该课程绩点为：" << weight*sqrt(classgrade) / 10 << endl;
	}
}
int Elective_course::outclassgrade(void)//外部得到分数
{
	return classgrade;
}
void Elective_course::inclassgrade(int grade)//老师给分接口；
{
	classgrade = grade;
}
string Elective_course::getclassnumber(void)//外部得到classnumber
{
	return classnumber;
}
string Elective_course::getclassname(void)//外部得到classname
{
	return classname;
}