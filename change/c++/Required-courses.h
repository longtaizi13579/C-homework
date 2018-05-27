#pragma once
#include<iostream>
#include<data.h>
using namespace std;
class Required_course :public father
{//必修课,课程编号、课程名称、学生分数，课程学分 
public:
	Required_course();//必修课构造函数1
	Required_course(string, string, int, int);//必修课构造函数2
	virtual string getclassnumber(void);//得到classnumber
	virtual string getclassname(void);//得到classname
	void gradecal(void) ;//绩点的计算
	void print(void) ;//输出
	void inclassgrade(int);//录入学生分数
	int outclassgrade(void);//输出学生分数
private:
	string classnumber;//必修课number
	string classname;//必修课name
	int classgrade;//必修课grade
	int weight;//必修课weight
	int sumgrade;//必修课sumgrade
};
