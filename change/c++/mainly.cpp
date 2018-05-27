#include<Elective-course.h>
#include<Required-courses.h>
#include<student.h>
#include<system.h>
#include<teacher.h>
#include <windows.h>
#define error1 1
int main()
{
	system1 guilmon;
	int data;
	guilmon.init();
	int bingo = 1;
	try
	{
		while (bingo)
		{
			system("cls");
			guilmon.show();
			cin >> data;
			switch (data)
			{
			case 1:
				if (guilmon.studentlogin() == 1)
				{
					int data1;
					int ok1 = 1;
					while (ok1)
					{
						system("cls");
						guilmon.student_function();//学生功能
						cin >> data1;
						switch (data1)
						{
						case 1:
							guilmon.now2->gradedetect();//课程成绩查询以及绩点计算方式查看
							break;
						case 2:
							guilmon.now2->chooseclass();//选课
							break;
						case 3:
							guilmon.now2->detect();//所有课程查看
							break;
						case 4:
							guilmon.now2->selectdetect();//已选课程查看
							break;
						case 5:
							guilmon.now2->dropclass();//取消选课
							break;
						case 6:
							ok1 = 0;//注销
							break;
						default:
							cout << "请输入正确数字" << endl;
						}
					}
				}
				break;
			case 2:
				if (guilmon.tearcherlogin() == 1)
				{
					int data2;
					int ok2 = 1;
					while (ok2)
					{
						system("cls");
						guilmon.teacher_function();//老师功能
						cin >> data2;
						switch (data2)
						{
						case 1:
							guilmon.now1->detect();//所有课程查看
							break;
						case 2:
							guilmon.in_hand_grade();//课程成绩的录入,提交
							break;
						case 3:
							guilmon.changegrade();//课程成绩的修改
							break;
						case 4:
							guilmon.classdect();//课程学生查看
							break;
						case 5:
							guilmon.stdgradedetect();//课程学生分数查看
							break;
						case 6:
							ok2 = 0;
							break;
						default:
							cout << "请输入正确数字" << endl;
						}

					}
				}
				break;
			case 3:
				guilmon.studentregist();//学生注册
				break;
			case 4:
				guilmon.tearcherregist();//老师注册
				break;
			case 5:
				bingo = 0;
				break;
			default:
				//cout << "请输入正确数字" << endl;
				//Sleep(400);
				throw(error1);
				break;
			}
		}
	}
	catch (int)
	{
		cout << "输入错误" << endl;
	}
	system("pause");
}