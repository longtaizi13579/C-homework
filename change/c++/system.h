#pragma once
#include <fstream>  
#include <iomanip> 
#include<vector>
#include<iostream>
#include<Elective-course.h>
#include<Required-courses.h>
#include<student.h>
#include<teacher.h>
using namespace std;
class system1 {
public:
	void init(void);//读记录 
	void show(void);//开始界面
	int tearcherlogin(void);//教师登录
	int studentlogin(void);//学生登录
	void logout(void);//注销 
	void tearcherregist(void);//教师注册+保存记录 
	void studentregist(void);//学生注册+保存记录 
	void student_function(void);//学生功能
	void teacher_function(void);//老师功能 
	void classdect(void);//老师查看该课程学生
	void changegrade(void);//老师修改指定选课学生的课程成绩
	void in_hand_grade(void);////课程成绩的录入,提交
	void stdgradedetect(void);//课程学生分数查看
	//void processing(void);//掌控整个程序运行
	teacher* now1;//当前登录的老师
	student* now2;//当前登录的学生
	int state;//判断是否有登录，登录则为1，无登录则为0
private:
	ifstream in;
	ofstream out;
	vector<student> all_student;
	vector<teacher> all_teacher;
	Elective_course all_Elective_course[4];
	Required_course all_Required_course[4];
};