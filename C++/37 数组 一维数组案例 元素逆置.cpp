//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//实现数组元素逆置
//
//	//1.创建数组
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "数组逆置前顺序： ";
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	//2.实现逆置
//	//2.1记录起始下标位置
//	//2.2记录结束下标位置
//	//2.3起始下标与结束下标进行互换
//	//2.4起始下标++ ， 结束下标--
//	//2.5执行循环2.1操作直到起始位置 >= 结束位置
//
//	int start = 0;//创建起始下标
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;//创建结束下标
//
//	while (start < end)
//	{
//		//实现元素互换
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//
//		//下标更新
//		start++;
//		end--;
//	}
//
//	//3.打印逆置结果
//	cout << "数组逆置后顺序： ";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}