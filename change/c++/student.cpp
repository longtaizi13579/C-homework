#include<student.h>
#include<Windows.h>
#include<string>
#include<data.h>
student::student(void)
{
//ѡ�޿�,�γ̱�š��γ����ơ�ѧ��ѧ�֣��γ�ѧ�� 
	Elective_course	hello1("10000", "������Ϣѧ", -1, 2);
	all_ele_course[0]=hello1;
	Elective_course	hello2("10001", "����", -1, 2);
	all_ele_course[1] = hello2;
	Elective_course	hello3("10002", "����", -1, 1);
	all_ele_course[2] = hello3;
	Elective_course	hello4("10003", "���뱦���о�ѧ", -1, 3);
	all_ele_course[3] = hello4;
	Required_course world1("20000", "��ɢ��ѧ", -1, 4);
	all_req_course[0] = world1;
	Required_course world2("20001", "���������", -1, 5);
	all_req_course[1] = world2;
	Required_course world3("20002", "��������ԭ��", -1, 5);
	all_req_course[2] = world3;
	Required_course world4("20003", "�ߵ���ѧ", -1, 5);
	all_req_course[3] = world4;
}
void student::chooseclass(void)
//ѡ��
{
	system("cls");
	int mem[4];//��ѡѡ�޿γ����
	int get;
	cout << "���޿γ̣�" << endl;
	for (int i = 0; i <=3; i++)
	{
		all_req_course[i].print();
		mem[i] = 0;
	}
	cout << "��ѡ�γ̣�" << endl;
	vector<Elective_course>::iterator it1;
	for (it1 = std_ele_course.begin(); it1 != std_ele_course.end(); it1++)
	{
		it1->print();
		for (int i = 0; i <=3; i++)
			if (all_ele_course[i].getclassnumber() == it1->getclassnumber())
				mem[i] = 1;
	}
	cout << "��ѡ�γ̣�" << endl;
	for(int i=0;i<=3;i++)
		if (mem[i] == 0)
		{
			cout << i << ":" << endl;
			all_ele_course[i].print();
		}
	cout << "������ѡ����ţ�������-1�˳���" << endl;
	cin >> get;
	if (get != -1)
	{
		std_ele_course.push_back(all_ele_course[get]);
	}
	Sleep(400);
		
}
void student::detect(void)
//�γ̵Ĳ鿴����
{
	system("cls");
	int get;
	cout << "���б��޿γ̣�" << endl;
	for (int i = 0; i <=3; i++)
	{
		all_req_course[i].print();
	}
	cout << endl;
	//vector<Elective_course>::iterator it1;
	cout << "����ѡ�޿γ̣�" << endl;
	for (int i = 0; i <= 3; i++)
	{
		all_ele_course[i].print();
	}
	cout << endl;
	cout << "�����������˳�:" << endl;
	cin >> get;
	Sleep(400);
}
void student::gradedetect(void)
//�γ̳ɼ��ͼ���ļ���Ͳ鿴����
{
	system("cls");
	int get1;
	cout << "���пγ̣�" << endl;
	cout << "1.���޿�:" << endl;
	for (int i = 0; i <=3; i++)
	{
		cout << i << ":" << endl;
		all_req_course[i].print();
	}
	cout << endl;
	cout << "2.ѡ�޿�:" << endl;
	//vector<Elective_course>::iterator it1;
	int count = 0;
	int get;
	for (int i = 0; i <= 3; i++)
	{
		cout << i+4<< ":" << endl;
		all_ele_course[i].print();
	}
	cout << endl;
	cout << "��������Ҫ�鿴��Ŀ�ı��:" << endl;
	cin >> get;
	if (get < 4)
	{
		all_req_course[get].gradecal();
	}
	else
	{
		all_ele_course[get-4].gradecal();
	}
	cout << "�����������˳�:" << endl;
	cin >> get1;
	Sleep(400);
}
void student::dropclass(void)
{
	//�˿β���
	system("cls");
	int seq = 0;
	int getseq;
	int get;
	cout << "��ѡ�γ̣�" << endl;
	vector<Elective_course>::iterator it1;
	for (it1 = std_ele_course.begin(); it1 != std_ele_course.end(); it1++)
	{
		cout << seq << ":" << endl;
		it1->print();
		seq++;
	}
	cout << "������Ҫ�˵��Ŀγ����(����-1�˳�):" << endl;
	cin >> getseq;
	if(getseq!=-1)
	{
	vector<Elective_course>::iterator it2;
	for (it2 = std_ele_course.begin(); getseq > 0; getseq--, it2++);
	if (it2->outclassgrade() == -1)
		std_ele_course.erase(it2);
	else
		cout << "�Ѿ����ڳɼ����޷��˿Ρ�" << endl;
	//cout << "�����������˳�:" << endl;
	}//cin >> get;
	Sleep(1000);
}
void student::selectdetect(void)
//��ѡ�γ̲鿴
{
	system("cls");
	int get;
	cout << "���б��޿γ̣�" << endl;
	for (int i = 0; i <= 3; i++)
	{
		all_req_course[i].print();
	}
	cout << endl;
	vector<Elective_course>::iterator it1;
	cout << "����ѡ�޿γ̣�" << endl;
	for (it1 = std_ele_course.begin(); it1 != std_ele_course.end(); it1++)
	{
		it1->print();
	}
	cout << endl;
	cout << "�����������˳�:" << endl;
	cin >> get;
	Sleep(400);
}
void student::getstudentnumber(string studentnumber1)
{//�ⲿ����ѧ��ѧ��
	studentnumber = studentnumber1;
}
void student::getstudentname(string studentname1)
{//�ⲿ����ѧ������
	studentname = studentname1;
}
void student::getstudentcollege(string studentcollege1)
{//�ⲿ����ѧ��ѧԺ
	studentcollege = studentcollege1;
}
void student::getstudentclass(string studentclass1)
{//�ⲿ����ѧ�����
	studentclass = studentclass1;
}

string student::outstudentnumber(void)
{
	//�ⲿ�õ�ѧ��ѧ��
	return studentnumber;
}
string student::outstudentname(void)
{
	//�ⲿ�õ�ѧ������
	return studentname;
}
string student::outstudentcollege(void)
{
	//�ⲿ�õ�ѧ��ѧԺ
	return studentcollege;
}
string student::outstudentclass(void)
{
	//�ⲿ�õ�ѧ�����
	return studentclass;
}
void student::print(void)
{
	//ѧ�����
	cout << "studentnumber: " << studentnumber << endl;
	cout << "studentname: " << studentname << endl;
	cout << "studentcollege: " << studentcollege << endl;
	cout << "studentclass: " << studentclass << endl;
}