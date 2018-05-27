#pragma once
#include<iostream>
#include<vector>
#include<Elective-course.h>
#include<Required-courses.h>
using namespace std;
class student {//学号、姓名、学院、班级
public:
	student();
	//void init(void);//初始化
	void chooseclass(void);//选课 
	void detect(void);//课程的查看功能
	void gradedetect(void);//课程成绩和绩点的计算和查看功能
	void getstudentnumber(string);//外部输入学生学号
	void getstudentname(string);//外部输入学生姓名
	void getstudentcollege(string);//外部输入学生学院
	void getstudentclass(string);//外部输入学生班别
	void print(void);//学生重要信息输出；
	void dropclass(void);//退课
	void selectdetect(void);//已选课程查看
	string outstudentnumber(void);//外部得到学生学号
	string outstudentname(void);//外部得到学生姓名
	string outstudentcollege(void);//外部得到学生学院
	string outstudentclass(void);//外部得到学生班别
	vector<Elective_course> std_ele_course;
	Required_course all_req_course[4];
//	void getstd_ele_course(Elective_course);
//	void getstd_req_course(Required_course);
private:
	string  studentnumber;//学生子类number
	string  studentname;//学生子类name
	string  studentcollege;//学生子类学院
	string  studentclass;//学生子类课程
	Elective_course all_ele_course[4];//学生子类选修课
	
	//vector<Required_course> std_req_course;
};
