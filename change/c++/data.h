#pragma once
#include<iostream>
#include<vector>
using namespace std;
class father {
public :
	void gradecal(void) ;//����ļ���
	virtual string getclassnumber(void);//�õ�classnumber
	virtual string getclassname(void);//�õ�classname
	void print(void);//���
private:
	string fathernumber;//����number
	string fathername;//����name
	int fathergrade;//����grade
	int fatherweight;//����weight
};