//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int a = 10;
//	int b = 10;
//
//	//const修饰的是指针，指针的指向可以更改，指针指向的值不能更改
//	const int* p1 = &a;
//	p1 = &b;//正确
//	//*p1 = 100; //报错
//	
//	//const修饰的是常量，指针的指向不能更改，指针指向的值可以更改
//	int* const p2 = &a;
//	//p2 = &b; //报错
//	*p2 = 100; //正确
//
//	//const既修饰指针又修饰常量
//	const int* const p3 = &a;
//	//p3 = &b; //报错
//	//*p3 = 100; //报错
//
//	system("pause");
//	return 0;
//}