#include<iostream>
#include<Required-courses.h>
#include<string>
#include<system.h>
using namespace std;
Required_course::Required_course(void)
{//必修课构造函数1
	classgrade = -1;
	sumgrade = 0.001;
}
Required_course::Required_course(string a, string b, int c, int d)
{//必修课构造函数2
	classnumber = a;
	classname = b;
	classgrade = c;
	weight = d;
	sumgrade = 0.001;
}
void Required_course::print(void)
{//输出
	cout << "classnumber:";
	cout << classnumber << endl;
	cout << "classname:" ;
	cout << classname<< endl;
	cout << "weight:";
	cout << weight << endl;
}

void Required_course::gradecal(void)
{//必修课绩点计算
	system("cls");
	cout << "课程名字：" << classname << endl;
	cout << "绩点计算方式：weight*classgrade/sumgrade" << endl;
	if (classgrade == -1)
		cout << "成绩状态：待评分" << endl;
	else
	{
		int sumgrade = 100;
		cout << "您的该课程分数为：" << classgrade << endl;
		cout << "您的该课程绩点为：" << weight*classgrade / sumgrade << endl;
	}
}

void Required_course::inclassgrade(int grade)
{//老师给分接口
	classgrade = grade;
	sumgrade = sumgrade + grade;
}
string Required_course::getclassnumber(void)
{//外部得到classnumber
	return classnumber;
}
string Required_course::getclassname(void)
{//外部得到classname
	return classname;
}
int Required_course::outclassgrade(void)
{//外部得到classgrade
	return classgrade;
}