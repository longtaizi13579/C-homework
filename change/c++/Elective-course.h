#pragma once
#include<iostream>
#include<data.h>
using namespace std;
class Elective_course:public father
{//ѡ�޿�,�γ̱�š��γ����ơ�ѧ��ѧ�֣��γ�ѧ�� 
public:
	Elective_course();//ѡ�޿ι��캯��1
	Elective_course(string, string, int, int);//ѡ�޿ι��캯��2
	void gradecal(void);//����ļ���
	virtual string getclassnumber(void);//�õ�classnumber
	virtual string getclassname(void);//�õ�classname
	void print(void);//���
	void inclassgrade(int);//��ʦ���ֽӿڣ�
	int outclassgrade(void);//�����ѧ���γ̷�����
private:
	string classnumber;//ѡ�޿�number
	string classname;//ѡ�޿�name
	int classgrade;//ѡ�޿�grade
	int weight;//ѡ�޿�weight
};