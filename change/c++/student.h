#pragma once
#include<iostream>
#include<vector>
#include<Elective-course.h>
#include<Required-courses.h>
using namespace std;
class student {//ѧ�š�������ѧԺ���༶
public:
	student();
	//void init(void);//��ʼ��
	void chooseclass(void);//ѡ�� 
	void detect(void);//�γ̵Ĳ鿴����
	void gradedetect(void);//�γ̳ɼ��ͼ���ļ���Ͳ鿴����
	void getstudentnumber(string);//�ⲿ����ѧ��ѧ��
	void getstudentname(string);//�ⲿ����ѧ������
	void getstudentcollege(string);//�ⲿ����ѧ��ѧԺ
	void getstudentclass(string);//�ⲿ����ѧ�����
	void print(void);//ѧ����Ҫ��Ϣ�����
	void dropclass(void);//�˿�
	void selectdetect(void);//��ѡ�γ̲鿴
	string outstudentnumber(void);//�ⲿ�õ�ѧ��ѧ��
	string outstudentname(void);//�ⲿ�õ�ѧ������
	string outstudentcollege(void);//�ⲿ�õ�ѧ��ѧԺ
	string outstudentclass(void);//�ⲿ�õ�ѧ�����
	vector<Elective_course> std_ele_course;
	Required_course all_req_course[4];
//	void getstd_ele_course(Elective_course);
//	void getstd_req_course(Required_course);
private:
	string  studentnumber;//ѧ������number
	string  studentname;//ѧ������name
	string  studentcollege;//ѧ������ѧԺ
	string  studentclass;//ѧ������γ�
	Elective_course all_ele_course[4];//ѧ������ѡ�޿�
	
	//vector<Required_course> std_req_course;
};
