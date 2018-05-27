#pragma once
#include<iostream>
#include<vector>
#include<Elective-course.h>
#include<Required-courses.h>
using namespace std;
class teacher {//工号、姓名、学院、任课课程
public:
	teacher();//构造函数
	//void init(void);
//	void classdect(void);//查看选课学生的学生信息
	void detect(void);//课程的查看功能
	void gradeop(void);//课程成绩的录入、修改、提交操作
	void getteachernumber(string);//外部输入老师的工号
	void getteachername(string);//外部输入老师的姓名
	void getteachercollege(string);//外部输入老师的学院
	void getteacherclass(string);//外部输入老师的所教课程
	string outteachernumber(void);//外部得到老师的工号
	string outteachername(void);//外部得到老师的姓名
	string outteachercollege(void);//外部得到老师的学院
	string outteacherclass(void);//外部得到老师的所教课程
private:
	string teachernumber;//老师工号
	string teachername;//老师姓名
	string teachercollege;//老师学院
	string teacherclass;//老师所教课程
	vector<Elective_course> tea_ele_course;
	vector<Required_course> tea_req_course;
	Elective_course all_ele_course[4];//所有选修课程
	Required_course all_req_course[4];//所以必修课程
};
