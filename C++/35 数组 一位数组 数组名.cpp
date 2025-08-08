//#include <iostream>
//using namespace std;
//
//int main(){
//	//数组名的用途
//	//1.可以获取整个数组所占用的内存空间大小
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//
//	cout << "整个数组所占用的内存空间大小： " << sizeof(arr) << endl;
//	cout << "数组中一个元素所占用的内存空间大小： " << sizeof(arr[0]) << endl;
//	cout << "数组中元素的个数： " << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	//2.可以通过数组名获取数组首地址
//	cout << "数组首地址：" << (int)arr << endl;
//	cout << "数组第一个元素的地址：" << (int)&arr[0] << endl;
//	cout << "数组第二个元素的地址：" << (int)&arr[1] << endl;
//
//	//arr = 10;错误，数组名是常量，不能进行赋值操作
//
//	system("pause");
//	return 0;
//}