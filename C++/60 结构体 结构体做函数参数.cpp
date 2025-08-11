//#include <iostream>
//#include <string>
//using namespace std;
//
////学生结构体创建
//struct student
//{
//	string name;//姓名
//	int age;//年龄
//	int score;//成绩
//};
//
////定义函数
////值传递
//void printStudent(struct student stu)
//{
//	stu.age = 28;
//	cout << "在子函数中打印学生信息 姓名：" << stu.name << " 年龄：" << stu.age << " 成绩：" << stu.score << endl;
//}
//
////地址传递
//void printStudent2(student*stu)
//{
//	stu->age = 28;
//	cout << "在子函数中打印学生信息 姓名：" << stu->name << " 年龄：" << stu->age << " 成绩：" << stu->score << endl;
//}
//
//int main() {
//
//	struct student stu;
//	stu.name = "张三";
//	stu.age = 20;
//	stu.score = 90;
//
//	//值传递
//	printStudent(stu);
//	//地址传递
//	printStudent2(&stu);
//
//	cout << "在main函数中打印学生信息 姓名：" << stu.name << " 年龄：" << stu.age << " 成绩：" << stu.score << endl;
//
//	system("pause");
//	return 0;
//}