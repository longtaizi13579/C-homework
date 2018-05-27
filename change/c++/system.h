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
	void init(void);//����¼ 
	void show(void);//��ʼ����
	int tearcherlogin(void);//��ʦ��¼
	int studentlogin(void);//ѧ����¼
	void logout(void);//ע�� 
	void tearcherregist(void);//��ʦע��+�����¼ 
	void studentregist(void);//ѧ��ע��+�����¼ 
	void student_function(void);//ѧ������
	void teacher_function(void);//��ʦ���� 
	void classdect(void);//��ʦ�鿴�ÿγ�ѧ��
	void changegrade(void);//��ʦ�޸�ָ��ѡ��ѧ���Ŀγ̳ɼ�
	void in_hand_grade(void);////�γ̳ɼ���¼��,�ύ
	void stdgradedetect(void);//�γ�ѧ�������鿴
	//void processing(void);//�ƿ�������������
	teacher* now1;//��ǰ��¼����ʦ
	student* now2;//��ǰ��¼��ѧ��
	int state;//�ж��Ƿ��е�¼����¼��Ϊ1���޵�¼��Ϊ0
private:
	ifstream in;
	ofstream out;
	vector<student> all_student;
	vector<teacher> all_teacher;
	Elective_course all_Elective_course[4];
	Required_course all_Required_course[4];
};