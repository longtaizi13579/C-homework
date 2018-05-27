#include<system.h>
#include<iostream>
#include<fstream>  
#include<string>  
#include <windows.h>
int error1 = 0;//打开文件错误
using namespace std;
void system1::init(void)
{
	//必修课，选修课初始化
	//选修课,课程编号、课程名称、学生学分，课程学分 
	Elective_course	hello1("10000", "生物信息学", -1, 2);
	all_Elective_course[0] = hello1;
	Elective_course	hello2("10001", "体育", -1, 2);
	all_Elective_course[1] = hello2;
	Elective_course	hello3("10002", "美术", -1, 1);
	all_Elective_course[2] = hello3;
	Elective_course	hello4("10003", "数码宝贝研究学", -1, 3);
	all_Elective_course[3] = hello4;
	Required_course world1("20000", "离散数学", -1, 4);
	all_Required_course[0] = world1;
	Required_course world2("20001", "计算机网络", -1, 5);
	all_Required_course[1] = world2;
	Required_course world3("20002", "计算机组成原理", -1, 5);
	all_Required_course[2] = world3;
	Required_course world4("20003", "高等数学", -1, 5);
	all_Required_course[3] = world4;
	state = 0;//未登录状态
	in.open("in.txt");
	string getstr;
	while (!in.eof())
	{//读入
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
	cout << "1.学生登录窗口" << endl;
	cout << "2.教师登录窗口" << endl;
	cout << "3.学生注册窗口" << endl;
	cout << "4.教师注册窗口" << endl;
	cout << "5.退出" << endl;
	cout << "请输入数字选择你要选择的操作：" << endl;
}
int system1::tearcherlogin(void)
//教师登录可try一下捕捉错误
{
	system("cls");
	int ok = 0;
	teacher memory;
	string mem;
	cout << "请输入工号：" << endl;
	cin >> mem;
	memory.getteachernumber(mem);
	cout << "请输入姓名：" << endl;
	cin >> mem;
	memory.getteachername(mem);
	cout << "请输入任课学院：" << endl;
	cin >> mem;
	memory.getteachercollege(mem);
	cout << "请输入任课课程：" << endl;
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
		cout << "登录成功" << endl;
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
		cout << "Warning:输入有错误" << endl;
		Sleep(400);
		return ok;
	}
}
int system1::studentlogin(void)
//学生登录
{
	system("cls");
	int ok = 0;
	student memory;
	string mem;
	cout << "请输入学号：" << endl;
	cin >> mem;
	memory.getstudentnumber(mem);
	cout << "请输入姓名：" << endl;
	cin >> mem;
	memory.getstudentname(mem);
	cout << "请输入所在学院：" << endl;
	cin >> mem;
	memory.getstudentcollege(mem);
	cout << "请输入所在班级：" << endl;
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
		cout << "登录成功" << endl;
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
		cout << "Warning:输入有错误" << endl;
		Sleep(400);
		return ok;
	}

}
void system1::logout(void)
//注销 
{


}
void system1::tearcherregist(void)
//教师注册+保存记录 
{
	system("cls");
	teacher memory;
	string mem;
	cout << "请输入工号：" << endl;
	cin >> mem;
	memory.getteachernumber(mem);
	cout << "请输入姓名：" << endl;
	cin >> mem;
	memory.getteachername(mem);
	cout << "请输入任课学院：" << endl;
	cin >> mem;
	memory.getteachercollege(mem);
	cout << "请输入任课课程：" << endl;
	cin >> mem;
	memory.getteacherclass(mem);
	all_teacher.push_back(memory);
}
void system1::studentregist(void)
//学生注册+保存记录 
{
	system("cls");
	student memory;
	string mem;
	cout << "请输入学号：" << endl;
	cin >> mem;
	memory.getstudentnumber(mem);
	cout << "请输入姓名：" << endl;
	cin >> mem;
	memory.getstudentname(mem);
	cout << "请输入所在学院：" << endl;
	cin >> mem;
	memory.getstudentcollege(mem);
	cout << "请输入所在班级：" << endl;
	cin >> mem;
	memory.getstudentclass(mem);
	all_student.push_back(memory);
}
void system1::student_function(void)
//学生功能,实现课程成绩和绩点的计算和查看功能,实现课程的查看功能,选课功能
{
	system("cls");
	cout << "1.课程成绩查询以及绩点计算方式查看" << endl;
	cout << "2.选课" << endl;
	cout << "3.所有课程查看" << endl;
	cout << "4.已选课程查看" << endl;
	cout << "5.取消选课" << endl;
	cout << "6.注销" << endl;
	cout << "请输入数字选择你要选择的操作：" << endl;
}
void system1::teacher_function(void)
//老师功能
{
	system("cls");
	cout << "1.所有课程查看" << endl;
	cout << "2.课程成绩的录入,提交" << endl;
	cout << "3.课程成绩的修改" << endl;
	cout << "4.课程学生查看" << endl;
	cout << "5.课程学生分数查看" << endl;
	cout << "6.注销" << endl;
	cout << "请输入数字选择你要选择的操作：" << endl;
}
void system1::classdect(void)
//老师查看对应课程学生信息（1.先输出所有人名字，2.后输出指定人具体信息）
{
	//遍历所有学生
	
	system("cls");
	int calculate = 0;
	int ok = 0;
	int memclass = -1;//记录class
	for (int i = 0; i <= 3; i++)
		if (now1->outteacherclass() == all_Required_course[i].getclassname())
		{
			ok = 1;
			memclass = i;
		}
	if (ok == 1)
	{//必修
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			cout << calculate++ << "." << endl;
			cout<<it1->outstudentname()<<endl;
		}
		int numseq;
		cout << "请输入查看详细信息学生序号：" << endl;
		cin >> numseq;
		system("cls");
		for (it1 = all_student.begin(); numseq != 0; numseq--, it1++);
		it1->print();
		cout << "grade:" << it1->all_req_course[memclass].outclassgrade()<< endl;
	}
	else
	{//选修
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
		cout << "请输入查看详细信息学生序号：" << endl;
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
	cout << "输入任意数退出：" << endl;
	cin >> getnumber;

}
void system1::in_hand_grade(void)
//课程成绩的录入,提交
{
	system("cls");
	cout << "所教课程的学生有：" << endl;
	int calculate = 0;
	int grade;//学生分数
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
			//选修
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
	cout << "请按顺序输入学生分数：" << endl;
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
			//选修
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
//老师修改指定选课学生的课程成绩
{
	system("cls");
	int calculate = 0;
	int grade;//学生分数
	int ok = 0;
	int memclass=-1;//记录class
	for (int i = 0; i <= 3; i++)
		if (now1->outteacherclass() == all_Required_course[i].getclassname())
		{
			ok = 1;
			memclass = i;
		}
	if (ok == 1)
	{//必修
		int stdsq;
		int changegrade;
		int getstdsq;
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			cout << calculate++ << "." << endl;
			cout << it1->outstudentname() << endl;
		}
		cout << "请输入要更改学生序号：" << endl;
		cin >> stdsq;
		cout << "请输入学生成绩：" << endl;
		cin >> changegrade;
		getstdsq = stdsq;
		for (it1 = all_student.begin(); getstdsq != 0; getstdsq--, it1++);
		it1->all_req_course[memclass].inclassgrade(changegrade);
	}
	else
	{//选修
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
		cout << "请输入要更改学生序号：" << endl;
		cin >> stdsq;
		cout << "请输入学生成绩：" << endl;
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
//课程学生分数查看
{
	system("cls");
	int calculate = 0;
	int ok = 0;
	int memclass =0;//记录class
	for (int i = 0; i <= 3; i++)
		if (now1->outteacherclass() == all_Required_course[i].getclassname())
		{
			ok = 1;
			memclass = i;
		}
	if (ok == 1)
	{//必修
		vector<student>::iterator it1;
		for (it1 = all_student.begin(); it1 != all_student.end(); it1++)
		{
			cout << calculate++ << "." << endl;
			cout << it1->outstudentname()<<":" << it1->all_req_course[memclass].outclassgrade() << endl;
		}

	}
	else
	{//选修
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
	cout << "输入任意数退出：" << endl;
	cin >> getnumber;
}