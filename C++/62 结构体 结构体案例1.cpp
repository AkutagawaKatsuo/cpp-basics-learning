//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
//
////ѧ���ṹ��
//struct Student
//{
//	//����
//	string sName;
//	//����
//	int score;
//};
//
////��ʦ�ṹ��
//struct Teacher
//{
//	//����
//	string	tName;
//	//ѧ������
//	struct	Student sArray[5];
//};
//
////����һ������ʦ��ѧ����ֵ�ĺ���
//void alloactSpace(struct Teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	//����ʦ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//
//		//��ѧ����ֵ
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//			int random = rand() % 61 + 40;// 40~100
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//
////��ӡ������Ϣ
//void printInfo(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������" << tArray[i].tName << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << tArray[i].sArray[j].sName
//				<< " ���Եķ�����" << tArray[i].sArray[j].score << endl;
//		}
//	}
//
//}
//
//int main() {
//
//	//���������
//	srand((unsigned int)time(NULL));
//
//	//1.����3����ʦ����
//	struct Teacher tArray[3];
//
//	//2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����ֵ
//	//������ʦ���鳤��
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	alloactSpace(tArray,len);
//
//	//3.��ӡ������ʦ��������ѧ����Ϣ
//	printInfo(tArray, len);
//
//	system("pause");
//	return 0;
//}