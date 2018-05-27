#include<teacher.h>
#include<Windows.h>
teacher::teacher(void)
{
	//选修课,课程编号、课程名称、学生学分，课程学分 
	Elective_course	hello1("10000", "生物信息学", -1, 2);
	all_ele_course[0] = hello1;
	Elective_course	hello2("10001", "体育", -1, 2);
	all_ele_course[1] = hello2;
	Elective_course	hello3("10002", "美术", -1, 1);
	all_ele_course[2] = hello3;
	Elective_course	hello4("10003", "数码宝贝研究学", -1, 3);
	all_ele_course[3] = hello4;
	Required_course world1("20000", "离散数学", -1, 4);
	all_req_course[0] = world1;
	Required_course world2("20001", "计算机网络", -1, 5);
	all_req_course[1] = world2;
	Required_course world3("20002", "计算机组成原理", -1, 5);
	all_req_course[2] = world3;
	Required_course world4("20003", "高等数学", -1, 5);
	all_req_course[3] = world4;
}
void teacher::detect(void) {
	//所有课程的查看功能
	system("cls");
	cout << "所有必修课程：" << endl;
	for (int i = 0; i <= 3; i++)
	{
		all_req_course[i].print();
	}
	cout << endl;
	cout << "所有选修课程：" << endl;
	//vector<Elective_course>::iterator it1;
	for (int i = 0; i <= 3; i++)
	{
		all_ele_course[i].print();
	}
	int getnumber;
	cout << "输入任意数退出：" << endl;
	cin >> getnumber;
}
void teacher::gradeop(void)
//课程成绩的录入、修改、提交操作
{

}
void teacher::getteachernumber(string teachernumber1)
{
	//外部输入老师工号
	teachernumber = teachernumber1;
}
void teacher::getteachername(string teachername1)
{
	//外部输入老师姓名
	teachername = teachername1;
}
void teacher::getteachercollege(string teachercollege1)
{
	//外部输入老师学院
	teachercollege = teachercollege1;
}
void teacher::getteacherclass(string teacherclass1)
{
	//外部输入老师所教课程
	teacherclass = teacherclass1;
}
string teacher::outteachernumber(void)
{
	//外部得到老师工号
	return teachernumber;
}
string teacher::outteachername(void)
{
	//外部得到老师姓名
	return teachername;
}
string teacher::outteachercollege(void)
{
	//外部得到老师所属学院
	return teachercollege;
}
string teacher::outteacherclass(void)
{
	//外部得到老师所教课程
	return teacherclass;
}