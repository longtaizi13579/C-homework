#include<system.h>
#include<iostream>
#include<fstream>  
#include<string>  
#include <windows.h>
int error1 = 0;//���ļ�����
using namespace std;
void system1::init(void)
{
	//���޿Σ�ѡ�޿γ�ʼ��
	//ѡ�޿�,�γ̱�š��γ����ơ�ѧ��ѧ�֣��γ�ѧ�� 
	Elective_course	hello1("10000", "������Ϣѧ", -1, 2);
	all_Elective_course[0] = hello1;
	Elective_course	hello2("10001", "����", -1, 2);
	all_Elective_course[1] = hello2;
	Elective_course	hello3("10002", "����", -1, 1);
	all_Elective_course[2] = hello3;
	Elective_course	hello4("10003", "���뱦���о�ѧ", -1, 3);
	all_Elective_course[3] = hello4;
	Required_course world1("20000", "��ɢ��ѧ", -1, 4);
	all_Required_course[0] = world1;
	Required_course world2("20001", "���������", -1, 5);
	all_Required_course[1] = world2;
	Required_course world3("20002", "��������ԭ��", -1, 5);
	all_Required_course[2] = world3;
	Required_course world4("20003", "�ߵ���ѧ", -1, 5);
	all_Required_course[3] = world4;
	state = 0;//δ��¼״̬
	in.open("in.txt");
	string getstr;
	while (!in.eof())
	{//����
		getline(in, getstr);
		if (getstr == "student")
		{
			student rem;
			getline(in, getstr);
			rem.getstudentnumber(getstr);
			getline(in, getstr);
			rem.getstudentname(getstr);
			getline(in, getstr);
			rem.getstudentcollege(getstr);
			getline(in, getstr);
			rem.getstudentclass(getstr);
			all_student.push_back(rem);
		}
		else
		{
			teacher rem1;
			getline(in, getstr);
			rem1.getteachernumber(getstr);
			getline(in, getstr);
			rem1.getteachername(getstr);
			getline(in, getstr);
			rem1.getteachercollege(getstr);
			getline(in, getstr);
			rem1.getteacherclass(getstr);
			all_teacher.push_back(rem1);

		}
	}
}
	//out.open("out.txt");

void system1::show(void)
{
	cout << "1.ѧ����¼����" << endl;
	cout << "2.��ʦ��¼����" << endl;
	cout << "3.ѧ��ע�ᴰ��" << endl;
	cout << "4.��ʦע�ᴰ��" << endl;
	cout << "5.�˳�" << endl;
	cout << "����������ѡ����Ҫѡ��Ĳ�����" << endl;
}
int system1::tearcherlogin(void)
//��ʦ��¼��tryһ�²�׽����
{
	system("cls");
	int ok = 0;
	teacher memory;
	string mem;
	cout << "�����빤�ţ�" << endl;
	cin >> mem;
	memory.getteachernumber(mem);
	cout << "������������" << endl;
	cin >> mem;
	memory.getteachername(mem);
	cout << "�������ο�ѧԺ��" << endl;
	cin >> mem;
	memory.getteachercollege(mem);
	cout << "�������οογ̣�" << endl;
	cin >> mem;
	memory.getteacherclass(mem);
	vector<teacher>::iterator it1;
	for (it1 = all_teacher.begin(); it1 != all_teacher.end(); it1++)
		if ((it1->outteachernumber() == memory.outteachernumber())&&(it1->outteacherclass()==memory.outteacherclass())&&(it1->outteachername()==memory.outteachername())&&(it1->outteachercollege()==memory.outteachercollege()))
		{
			ok = 1;
			now1 = &(*it1);
			break;
		}
	if (ok == 1)
	{
		cout << "��¼�ɹ�" << endl;
		//now1.getteacherclass(memory.outteacherclass());
		//now1.getteachercollege(memory.outteachercollege());
		//now1.getteachername(memory.outteachername());
		//now1.getteachernumber(memory.outteachernumber());
		state = 1;
		Sleep(400);
		//now1.init();
		return ok;
	}
	else
	{
		cout << "Warning:�����д���" << endl;
		Sleep(400);
		return ok;
	}
}
int system1::studentlogin(void)
//ѧ����¼
{
	system("cls");
	int ok = 0;
	student memory;
	string mem;
	cout << "������ѧ�ţ�" << endl;
	cin >> mem;
	memory.getstudentnumber(mem);
	cout << "������������" << endl;
	cin >> mem;
	memory.getstudentname(mem);
	cout << "����������ѧԺ��" << endl;
	cin >> mem;
	memory.getstudentcollege(mem);
	cout << "���������ڰ༶��" << endl;
	cin >> mem;
	memory.getstudentclass(mem);
	vector<student>::iterator it1;
	for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		if ((it1->outstudentnumber() == memory.outstudentnumber()) && (it1->outstudentclass() == memory.outstudentclass()) && (it1->outstudentname() == memory.outstudentname()) && (it1->outstudentcollege()== memory.outstudentcollege()))
		{
			ok = 1;
			now2 =&(*it1);
			break;
		}
	if (ok == 1)
	{
		cout << "��¼�ɹ�" << endl;
		//now2.getstudentclass(memory.outstudentclass());
		//now2.getstudentcollege(memory.outstudentcollege());
		//now2.getstudentname(memory.outstudentname());
		//now2.getstudentnumber(memory.outstudentnumber());
		state = 1;
		//now2.init();
		Sleep(400);
		return ok;
	}
	else
	{
		cout << "Warning:�����д���" << endl;
		Sleep(400);
		return ok;
	}

}
void system1::logout(void)
//ע�� 
{


}
void system1::tearcherregist(void)
//��ʦע��+�����¼ 
{
	system("cls");
	teacher memory;
	string mem;
	cout << "�����빤�ţ�" << endl;
	cin >> mem;
	memory.getteachernumber(mem);
	cout << "������������" << endl;
	cin >> mem;
	memory.getteachername(mem);
	cout << "�������ο�ѧԺ��" << endl;
	cin >> mem;
	memory.getteachercollege(mem);
	cout << "�������οογ̣�" << endl;
	cin >> mem;
	memory.getteacherclass(mem);
	all_teacher.push_back(memory);
}
void system1::studentregist(void)
//ѧ��ע��+�����¼ 
{
	system("cls");
	student memory;
	string mem;
	cout << "������ѧ�ţ�" << endl;
	cin >> mem;
	memory.getstudentnumber(mem);
	cout << "������������" << endl;
	cin >> mem;
	memory.getstudentname(mem);
	cout << "����������ѧԺ��" << endl;
	cin >> mem;
	memory.getstudentcollege(mem);
	cout << "���������ڰ༶��" << endl;
	cin >> mem;
	memory.getstudentclass(mem);
	all_student.push_back(memory);
}
void system1::student_function(void)
//ѧ������,ʵ�ֿγ̳ɼ��ͼ���ļ���Ͳ鿴����,ʵ�ֿγ̵Ĳ鿴����,ѡ�ι���
{
	system("cls");
	cout << "1.�γ̳ɼ���ѯ�Լ�������㷽ʽ�鿴" << endl;
	cout << "2.ѡ��" << endl;
	cout << "3.���пγ̲鿴" << endl;
	cout << "4.��ѡ�γ̲鿴" << endl;
	cout << "5.ȡ��ѡ��" << endl;
	cout << "6.ע��" << endl;
	cout << "����������ѡ����Ҫѡ��Ĳ�����" << endl;
}
void system1::teacher_function(void)
//��ʦ����
{
	system("cls");
	cout << "1.���пγ̲鿴" << endl;
	cout << "2.�γ̳ɼ���¼��,�ύ" << endl;
	cout << "3.�γ̳ɼ����޸�" << endl;
	cout << "4.�γ�ѧ���鿴" << endl;
	cout << "5.�γ�ѧ�������鿴" << endl;
	cout << "6.ע��" << endl;
	cout << "����������ѡ����Ҫѡ��Ĳ�����" << endl;
}
void system1::classdect(void)
//��ʦ�鿴��Ӧ�γ�ѧ����Ϣ��1.��������������֣�2.�����ָ���˾�����Ϣ��
{
	//��������ѧ��
	
	system("cls");
	int calculate = 0;
	int ok = 0;
	int memclass = -1;//��¼class
	for (int i = 0; i <= 3; i++)
		if (now1->outteacherclass() == all_Required_course[i].getclassname())
		{
			ok = 1;
			memclass = i;
		}
	if (ok == 1)
	{//����
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			cout << calculate++ << "." << endl;
			cout<<it1->outstudentname()<<endl;
		}
		int numseq;
		cout << "������鿴��ϸ��Ϣѧ����ţ�" << endl;
		cin >> numseq;
		system("cls");
		for (it1 = all_student.begin(); numseq != 0; numseq--, it1++);
		it1->print();
		cout << "grade:" << it1->all_req_course[memclass].outclassgrade()<< endl;
	}
	else
	{//ѡ��
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			vector<Elective_course>::iterator it2;
			for (it2 = it1->std_ele_course.begin(); it2 != it1->std_ele_course.end(); it2++)
			{
				if (now1->outteacherclass() == it2->getclassname())
				{
					cout << calculate++ << "." << endl;
					cout << it1->outstudentname()<<endl;
				}
			}
		}
		int numseq;
		cout << "������鿴��ϸ��Ϣѧ����ţ�" << endl;
		cin >> numseq;
		system("cls");
		for (it1 = all_student.begin();numseq!=0; numseq--,it1++);
		vector<Elective_course>::iterator it2;
		for (it2 = it1->std_ele_course.begin(); it2 != it1->std_ele_course.end(); it2++)
		{
			if (now1->outteacherclass() == it2->getclassname())
			{
				it1->print();
				cout << "grade:"<<it2->outclassgrade() << endl;
			}
		}
	}
	int getnumber;
	cout << "�����������˳���" << endl;
	cin >> getnumber;

}
void system1::in_hand_grade(void)
//�γ̳ɼ���¼��,�ύ
{
	system("cls");
	cout << "���̿γ̵�ѧ���У�" << endl;
	int calculate = 0;
	int grade;//ѧ������
	int ok = 0;
	for (int i = 0; i <= 3; i++)
		if (now1->outteacherclass() == all_Required_course[i].getclassname())
			ok = 1;
	if (ok == 1)
	{
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			cout << calculate++ << "." << endl;
			cout << it1->outstudentname()<<endl;
		}

	}
	else
	{
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			//ѡ��
			vector<Elective_course>::iterator it2;
			for (it2 = it1->std_ele_course.begin(); it2 != it1->std_ele_course.end(); it2++)
			{
				if (now1->outteacherclass() == it2->getclassname())
				{
					cout << calculate++ << "." << endl;
					cout << it1->outstudentname() << endl;
				}
			}
		}
	}
	cout << "�밴˳������ѧ��������" << endl;
	if (ok == 1)
	{
		vector<student>::iterator it2;
		for (it2 = all_student.begin(); it2 != all_student.end(); it2++)
		{
			cin >> grade;
			for (int i = 0; i <= 3; i++)
				if (now1->outteacherclass() == it2->all_req_course[i].getclassname())
					it2->all_req_course[i].inclassgrade(grade);
		}

	}
	else
	{
		vector<student>::iterator it3;
		for (it3 = all_student.begin(); it3 != all_student.end(); it3++)
		{
			//ѡ��
			vector<Elective_course>::iterator it4;
			for (it4= it3->std_ele_course.begin(); it4 != it3->std_ele_course.end(); it4++)
			{
				if (now1->outteacherclass() == it4->getclassname())
				{
					cin >> grade;
					it4->inclassgrade(grade);
				}
			}
		}
	}

}
void system1::changegrade(void)
//��ʦ�޸�ָ��ѡ��ѧ���Ŀγ̳ɼ�
{
	system("cls");
	int calculate = 0;
	int grade;//ѧ������
	int ok = 0;
	int memclass=-1;//��¼class
	for (int i = 0; i <= 3; i++)
		if (now1->outteacherclass() == all_Required_course[i].getclassname())
		{
			ok = 1;
			memclass = i;
		}
	if (ok == 1)
	{//����
		int stdsq;
		int changegrade;
		int getstdsq;
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			cout << calculate++ << "." << endl;
			cout << it1->outstudentname() << endl;
		}
		cout << "������Ҫ����ѧ����ţ�" << endl;
		cin >> stdsq;
		cout << "������ѧ���ɼ���" << endl;
		cin >> changegrade;
		getstdsq = stdsq;
		for (it1 = all_student.begin(); getstdsq != 0; getstdsq--, it1++);
		it1->all_req_course[memclass].inclassgrade(changegrade);
	}
	else
	{//ѡ��
		int stdsq;
		int changegrade;
		int getstdsq;
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			vector<Elective_course>::iterator it2;
			for (it2 = it1->std_ele_course.begin(); it2 != it1->std_ele_course.end(); it2++)
			{
				
				if (now1->outteacherclass() == it2->getclassname())
				{
					cout << calculate++ << "." << endl;
					cout<<it1->outstudentname()<<endl;
				}
			}
		}
		cout << "������Ҫ����ѧ����ţ�" << endl;
		cin >> stdsq;
		cout << "������ѧ���ɼ���" << endl;
		cin >> changegrade;
		getstdsq = stdsq;
		for (it1 = all_student.begin(); getstdsq != 0; getstdsq--, it1++);
		vector<Elective_course>::iterator it2;
		try
		{
			for (it2 = it1->std_ele_course.begin(); it2 != it1->std_ele_course.end(); it2++)
			{
				if (now1->outteacherclass() == it2->getclassname())
				{
					//cout << calculate++ << "." << endl;
					it2->inclassgrade(changegrade);
				}
			}
		}
		catch (const std::exception&)
		{
			throw("error");
		}
			

	}
}
void system1::stdgradedetect(void)
//�γ�ѧ�������鿴
{
	system("cls");
	int calculate = 0;
	int ok = 0;
	int memclass =0;//��¼class
	for (int i = 0; i <= 3; i++)
		if (now1->outteacherclass() == all_Required_course[i].getclassname())
		{
			ok = 1;
			memclass = i;
		}
	if (ok == 1)
	{//����
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			cout << calculate++ << "." << endl;
			cout << it1->outstudentname()<<":" << it1->all_req_course[memclass].outclassgrade() << endl;
		}

	}
	else
	{//ѡ��
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			vector<Elective_course>::iterator it2;
			for (it2 = it1->std_ele_course.begin(); it2 != it1->std_ele_course.end(); it2++)
			{
				if (now1->outteacherclass() == it2->getclassname())
				{
					cout << calculate++ << "." << endl;
					cout << it1->outstudentname()<<":"<< it2->outclassgrade() << endl;
				}
			}
		}
	}
	int getnumber;
	cout << "�����������˳���" << endl;
	cin >> getnumber;
}