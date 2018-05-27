#pragma once
#include<iostream>
#include<data.h>
using namespace std;
class Elective_course:public father
{//选修课,课程编号、课程名称、学生学分，课程学分 
public:
	Elective_course();//选修课构造函数1
	Elective_course(string, string, int, int);//选修课构造函数2
	void gradecal(void);//绩点的计算
	virtual string getclassnumber(void);//得到classnumber
	virtual string getclassname(void);//得到classname
	void print(void);//输出
	void inclassgrade(int);//老师给分接口；
	int outclassgrade(void);//输出该学生课程分数；
private:
	string classnumber;//选修课number
	string classname;//选修课name
	int classgrade;//选修课grade
	int weight;//选修课weight
};