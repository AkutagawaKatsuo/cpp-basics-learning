//#include <iostream>
//#include <string>
//using namespace std;
//
////结构体中const的使用
//
////创建学生结构体
//struct student
//{
//	string name;//姓名
//	int age;//年龄
//	int score;//成绩
//};
//
////使用地址传递可以节省大量内存空间
//void printStudent(const struct student *s)
//{
//	//s->age = 22;//操作失败，加入了const防止函数体中的误操作
//	cout << "姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << endl;
//}
//
//int main() {
//
//	struct student s = { "张三" ,20 , 90 };
//	printStudent(&s);
//
//	system("pause");
//	return 0;
//}