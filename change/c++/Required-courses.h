#pragma once
#include<iostream>
#include<data.h>
using namespace std;
class Required_course :public father
{//���޿�,�γ̱�š��γ����ơ�ѧ���������γ�ѧ�� 
public:
	Required_course();//���޿ι��캯��1
	Required_course(string, string, int, int);//���޿ι��캯��2
	virtual string getclassnumber(void);//�õ�classnumber
	virtual string getclassname(void);//�õ�classname
	void gradecal(void) ;//����ļ���
	void print(void) ;//���
	void inclassgrade(int);//¼��ѧ������
	int outclassgrade(void);//���ѧ������
private:
	string classnumber;//���޿�number
	string classname;//���޿�name
	int classgrade;//���޿�grade
	int weight;//���޿�weight
	int sumgrade;//���޿�sumgrade
};
