//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//查看二维数组所占用内存空间
//	int arr[2][3]
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//
//	cout << "二维数组占用的内存空间： " << sizeof(arr) << endl;
//	cout << "二维数组一行元素占用内存空间： " << sizeof(arr[0]) << endl;
//	cout << "二维数组元素占用内存空间： " << sizeof(arr[0][0]) << endl;
//	
//	cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	//获取二维数组首地址
//	cout << "二维数组首地址： " << (int)arr << endl;
//	cout << "二维数组第一行地址： " << (int)&arr[0] << endl;
//	cout << "二维数组第二行地址： " << (int)&arr[1] << endl;
//
//	cout << "二维数组第一个元素地址： " << (int)&arr[0] << endl;
//	cout << "二维数组第二个元素地址： " << (int)&arr[0][1] << endl;
// 
//	system("pause");
//	return 0;
//}