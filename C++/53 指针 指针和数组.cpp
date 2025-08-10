//#include <iostream>
//using namespace std;
//
//int main() {
//
//	//利用指针访问数组中的元素
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int* p1 = arr;
//
//	cout << "利用指针访问数组第一个元素： " << *p1 << endl;
//	
//	p1++;
//
//	cout << "利用指针访问数组第二个元素： " << *p1 << endl;
//
//	//利用指针实现数组元素遍历
//
//	cout << "利用指针遍历数组元素" << endl;
//
//	int* p2 = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *p2 << " ";
//		p2++;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}