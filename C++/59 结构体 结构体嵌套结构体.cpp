//#include <iostream>
//#include <string>
//using namespace std;
//
////结构体嵌套结构体
//
////定义学生结构体
//struct Student
//{
//	string name;//姓名
//	int age;//年龄
//	int score;//分数
//};
////定义老师结构体
//struct Teacher
//{
//	int id;//职工编号
//	string name;//教师名称
//	int age;//教师年龄
//	struct Student stu;//教师辅导学生
//};
//int main() {
//
//	//创建老师
//	struct Teacher t1;
//	t1.id = 1283;
//	t1.name = "老王";
//	t1.age = 48;
//	
//	t1.stu.name = "张三";
//	t1.stu.age = 18;
//	t1.stu.score = 90;
//
//	cout << "教师 职工编号：" << t1.id << " 姓名：" << t1.name
//		<< " 年龄：" << t1.age << " 辅导学生 姓名：" << t1.stu.name
//		<< " 学生年龄：" << t1.stu.age << " 学生成绩：" << t1.stu.score
//		<< endl;
//
//	system("pause");
//	return 0;
//}