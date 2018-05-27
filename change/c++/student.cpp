#include<student.h>
#include<Windows.h>
#include<string>
#include<data.h>
student::student(void)
{
//选修课,课程编号、课程名称、学生学分，课程学分 
	Elective_course	hello1("10000", "生物信息学", -1, 2);
	all_ele_course[0]=hello1;
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
void student::chooseclass(void)
//选课
{
	system("cls");
	int mem[4];//已选选修课程序号
	int get;
	cout << "必修课程：" << endl;
	for (int i = 0; i <=3; i++)
	{
		all_req_course[i].print();
		mem[i] = 0;
	}
	cout << "已选课程：" << endl;
	vector<Elective_course>::iterator it1;
	for (it1 = std_ele_course.begin(); it1 != std_ele_course.end(); it1++)
	{
		it1->print();
		for (int i = 0; i <=3; i++)
			if (all_ele_course[i].getclassnumber() == it1->getclassnumber())
				mem[i] = 1;
	}
	cout << "可选课程：" << endl;
	for(int i=0;i<=3;i++)
		if (mem[i] == 0)
		{
			cout << i << ":" << endl;
			all_ele_course[i].print();
		}
	cout << "请输入选课序号：（输入-1退出）" << endl;
	cin >> get;
	if (get != -1)
	{
		std_ele_course.push_back(all_ele_course[get]);
	}
	Sleep(400);
		
}
void student::detect(void)
//课程的查看功能
{
	system("cls");
	int get;
	cout << "所有必修课程：" << endl;
	for (int i = 0; i <=3; i++)
	{
		all_req_course[i].print();
	}
	cout << endl;
	//vector<Elective_course>::iterator it1;
	cout << "所有选修课程：" << endl;
	for (int i = 0; i <= 3; i++)
	{
		all_ele_course[i].print();
	}
	cout << endl;
	cout << "输入任意数退出:" << endl;
	cin >> get;
	Sleep(400);
}
void student::gradedetect(void)
//课程成绩和绩点的计算和查看功能
{
	system("cls");
	int get1;
	cout << "所有课程：" << endl;
	cout << "1.必修课:" << endl;
	for (int i = 0; i <=3; i++)
	{
		cout << i << ":" << endl;
		all_req_course[i].print();
	}
	cout << endl;
	cout << "2.选修课:" << endl;
	//vector<Elective_course>::iterator it1;
	int count = 0;
	int get;
	for (int i = 0; i <= 3; i++)
	{
		cout << i+4<< ":" << endl;
		all_ele_course[i].print();
	}
	cout << endl;
	cout << "请输入需要查看科目的编号:" << endl;
	cin >> get;
	if (get < 4)
	{
		all_req_course[get].gradecal();
	}
	else
	{
		all_ele_course[get-4].gradecal();
	}
	cout << "输入任意数退出:" << endl;
	cin >> get1;
	Sleep(400);
}
void student::dropclass(void)
{
	//退课操作
	system("cls");
	int seq = 0;
	int getseq;
	int get;
	cout << "已选课程：" << endl;
	vector<Elective_course>::iterator it1;
	for (it1 = std_ele_course.begin(); it1 != std_ele_course.end(); it1++)
	{
		cout << seq << ":" << endl;
		it1->print();
		seq++;
	}
	cout << "请输入要退掉的课程序号(输入-1退出):" << endl;
	cin >> getseq;
	if(getseq!=-1)
	{
	vector<Elective_course>::iterator it2;
	for (it2 = std_ele_course.begin(); getseq > 0; getseq--, it2++);
	if (it2->outclassgrade() == -1)
		std_ele_course.erase(it2);
	else
		cout << "已经存在成绩，无法退课。" << endl;
	//cout << "输入任意数退出:" << endl;
	}//cin >> get;
	Sleep(1000);
}
void student::selectdetect(void)
//已选课程查看
{
	system("cls");
	int get;
	cout << "所有必修课程：" << endl;
	for (int i = 0; i <= 3; i++)
	{
		all_req_course[i].print();
	}
	cout << endl;
	vector<Elective_course>::iterator it1;
	cout << "所有选修课程：" << endl;
	for (it1 = std_ele_course.begin(); it1 != std_ele_course.end(); it1++)
	{
		it1->print();
	}
	cout << endl;
	cout << "输入任意数退出:" << endl;
	cin >> get;
	Sleep(400);
}
void student::getstudentnumber(string studentnumber1)
{//外部输入学生学号
	studentnumber = studentnumber1;
}
void student::getstudentname(string studentname1)
{//外部输入学生姓名
	studentname = studentname1;
}
void student::getstudentcollege(string studentcollege1)
{//外部输入学生学院
	studentcollege = studentcollege1;
}
void student::getstudentclass(string studentclass1)
{//外部输入学生班别
	studentclass = studentclass1;
}

string student::outstudentnumber(void)
{
	//外部得到学生学号
	return studentnumber;
}
string student::outstudentname(void)
{
	//外部得到学生姓名
	return studentname;
}
string student::outstudentcollege(void)
{
	//外部得到学生学院
	return studentcollege;
}
string student::outstudentclass(void)
{
	//外部得到学生班别
	return studentclass;
}
void student::print(void)
{
	//学生输出
	cout << "studentnumber: " << studentnumber << endl;
	cout << "studentname: " << studentname << endl;
	cout << "studentcollege: " << studentcollege << endl;
	cout << "studentclass: " << studentclass << endl;
}