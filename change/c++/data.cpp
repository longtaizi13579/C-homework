#include<data.h>
#include<string>
string father::getclassnumber(void)//得到classnumber
{
	return fathernumber;
}
string father::getclassname(void)//得到classname
{
	return fathername;
}
void father::print(void)//输出
{
	cout << "classnumber:";
	cout << fathernumber << endl;
	cout << "classname:";
	cout << fathername << endl;
	cout << "weight:";
	cout << fatherweight << endl;
}

void father::gradecal(void)//绩点的计算
{
	cout << "绩点计算方式：weight*sqrt(classgrade)/10" << endl;
	if (fathergrade == -1)
		cout << "error" << endl;
	else
	{
		cout << "您的该课程分数为：" << fathergrade << endl;
		cout << "您的该课程绩点为：" << fatherweight*sqrt(fathergrade) / 10 << endl;
	}
}