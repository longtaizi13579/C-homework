#include<data.h>
#include<string>
string father::getclassnumber(void)//�õ�classnumber
{
	return fathernumber;
}
string father::getclassname(void)//�õ�classname
{
	return fathername;
}
void father::print(void)//���
{
	cout << "classnumber:";
	cout << fathernumber << endl;
	cout << "classname:";
	cout << fathername << endl;
	cout << "weight:";
	cout << fatherweight << endl;
}

void father::gradecal(void)//����ļ���
{
	cout << "������㷽ʽ��weight*sqrt(classgrade)/10" << endl;
	if (fathergrade == -1)
		cout << "error" << endl;
	else
	{
		cout << "���ĸÿγ̷���Ϊ��" << fathergrade << endl;
		cout << "���ĸÿγ̼���Ϊ��" << fatherweight*sqrt(fathergrade) / 10 << endl;
	}
}