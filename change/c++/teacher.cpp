#include<teacher.h>
#include<Windows.h>
teacher::teacher(void)
{
	//ѡ�޿�,�γ̱�š��γ����ơ�ѧ��ѧ�֣��γ�ѧ�� 
	Elective_course	hello1("10000", "������Ϣѧ", -1, 2);
	all_ele_course[0] = hello1;
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
void teacher::detect(void) {
	//���пγ̵Ĳ鿴����
	system("cls");
	cout << "���б��޿γ̣�" << endl;
	for (int i = 0; i <= 3; i++)
	{
		all_req_course[i].print();
	}
	cout << endl;
	cout << "����ѡ�޿γ̣�" << endl;
	//vector<Elective_course>::iterator it1;
	for (int i = 0; i <= 3; i++)
	{
		all_ele_course[i].print();
	}
	int getnumber;
	cout << "�����������˳���" << endl;
	cin >> getnumber;
}
void teacher::gradeop(void)
//�γ̳ɼ���¼�롢�޸ġ��ύ����
{

}
void teacher::getteachernumber(string teachernumber1)
{
	//�ⲿ������ʦ����
	teachernumber = teachernumber1;
}
void teacher::getteachername(string teachername1)
{
	//�ⲿ������ʦ����
	teachername = teachername1;
}
void teacher::getteachercollege(string teachercollege1)
{
	//�ⲿ������ʦѧԺ
	teachercollege = teachercollege1;
}
void teacher::getteacherclass(string teacherclass1)
{
	//�ⲿ������ʦ���̿γ�
	teacherclass = teacherclass1;
}
string teacher::outteachernumber(void)
{
	//�ⲿ�õ���ʦ����
	return teachernumber;
}
string teacher::outteachername(void)
{
	//�ⲿ�õ���ʦ����
	return teachername;
}
string teacher::outteachercollege(void)
{
	//�ⲿ�õ���ʦ����ѧԺ
	return teachercollege;
}
string teacher::outteacherclass(void)
{
	//�ⲿ�õ���ʦ���̿γ�
	return teacherclass;
}