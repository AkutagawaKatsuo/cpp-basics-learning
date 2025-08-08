//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//利用冒泡排序对数组排序
//	int arr[10] = { 2,8,1,9,3,5,4,7,6,0};
//	
//	//打印数组排序前顺序
//	cout << "排序前数组元素顺序：";
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	//实现冒泡排序
//	//总共排序轮数 = 元素个数 - 1
//	for (int i = 0; i < 10 - 1; i++)
//	{
//		//内层循环对比 次数 = 元素个数 - 当前轮数 - 1
//		for (int j = 0; j < 10 - i - 1; j++)
//		{
//			//比较两个数字大小，如果前一个数字 > 后一个数字，则进行交换
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	//排序后结果
//	cout << "排序后数组元素顺序：";
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}