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
						guilmon.student_function();//ѧ������
						cin >> data1;
						switch (data1)
						{
						case 1:
							guilmon.now2->gradedetect();//�γ̳ɼ���ѯ�Լ�������㷽ʽ�鿴
							break;
						case 2:
							guilmon.now2->chooseclass();//ѡ��
							break;
						case 3:
							guilmon.now2->detect();//���пγ̲鿴
							break;
						case 4:
							guilmon.now2->selectdetect();//��ѡ�γ̲鿴
							break;
						case 5:
							guilmon.now2->dropclass();//ȡ��ѡ��
							break;
						case 6:
							ok1 = 0;//ע��
							break;
						default:
							cout << "��������ȷ����" << endl;
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
						guilmon.teacher_function();//��ʦ����
						cin >> data2;
						switch (data2)
						{
						case 1:
							guilmon.now1->detect();//���пγ̲鿴
							break;
						case 2:
							guilmon.in_hand_grade();//�γ̳ɼ���¼��,�ύ
							break;
						case 3:
							guilmon.changegrade();//�γ̳ɼ����޸�
							break;
						case 4:
							guilmon.classdect();//�γ�ѧ���鿴
							break;
						case 5:
							guilmon.stdgradedetect();//�γ�ѧ�������鿴
							break;
						case 6:
							ok2 = 0;
							break;
						default:
							cout << "��������ȷ����" << endl;
						}

					}
				}
				break;
			case 3:
				guilmon.studentregist();//ѧ��ע��
				break;
			case 4:
				guilmon.tearcherregist();//��ʦע��
				break;
			case 5:
				bingo = 0;
				break;
			default:
				//cout << "��������ȷ����" << endl;
				//Sleep(400);
				throw(error1);
				break;
			}
		}
	}
	catch (int)
	{
		cout << "�������" << endl;
	}
	system("pause");
}