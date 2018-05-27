#pragma once
#include<iostream>
#include<vector>
using namespace std;
class father {
public :
	void gradecal(void) ;//绩点的计算
	virtual string getclassnumber(void);//得到classnumber
	virtual string getclassname(void);//得到classname
	void print(void);//输出
private:
	string fathernumber;//父类number
	string fathername;//父类name
	int fathergrade;//父类grade
	int fatherweight;//父类weight
};