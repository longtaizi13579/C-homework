#pragma once
#include<iostream>
#include<vector>
#include<Elective-course.h>
#include<Required-courses.h>
using namespace std;
class teacher {//���š�������ѧԺ���οογ�
public:
	teacher();//���캯��
	//void init(void);
//	void classdect(void);//�鿴ѡ��ѧ����ѧ����Ϣ
	void detect(void);//�γ̵Ĳ鿴����
	void gradeop(void);//�γ̳ɼ���¼�롢�޸ġ��ύ����
	void getteachernumber(string);//�ⲿ������ʦ�Ĺ���
	void getteachername(string);//�ⲿ������ʦ������
	void getteachercollege(string);//�ⲿ������ʦ��ѧԺ
	void getteacherclass(string);//�ⲿ������ʦ�����̿γ�
	string outteachernumber(void);//�ⲿ�õ���ʦ�Ĺ���
	string outteachername(void);//�ⲿ�õ���ʦ������
	string outteachercollege(void);//�ⲿ�õ���ʦ��ѧԺ
	string outteacherclass(void);//�ⲿ�õ���ʦ�����̿γ�
private:
	string teachernumber;//��ʦ����
	string teachername;//��ʦ����
	string teachercollege;//��ʦѧԺ
	string teacherclass;//��ʦ���̿γ�
	vector<Elective_course> tea_ele_course;
	vector<Required_course> tea_req_course;
	Elective_course all_ele_course[4];//����ѡ�޿γ�
	Required_course all_req_course[4];//���Ա��޿γ�
};
