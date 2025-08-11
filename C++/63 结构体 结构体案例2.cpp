//#include <iostream>
//#include <string>
//using namespace std;
//
////1.创建英雄结构体
////英雄结构体
//struct Hero
//{
//	string name;//姓名
//	int age;//年龄
//	string sex;//性别
//};
//
////冒泡排序 实现年龄升序排列
//void bubbleSort(struct Hero heroArray[],int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			//如果j下标的年龄 > j + 1下标的年龄，交换两个元素
//			if (heroArray[j].age > heroArray[j + 1].age)
//			{
//				struct Hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//
//}
//
////打印排序后数组中的信息
//void printHero(struct Hero heroArray[], int len)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age
//			<< " 性别：" << heroArray[i].sex << endl;
//	}
//}
//
//int main() {
//
//	//2.创建数组存放5个英雄
//	struct Hero heroArray[5] =
//	{
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//
//	cout << "排序前数组元素： " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age
//			<< " 性别：" << heroArray[i].sex << endl;
//	}
//	//3.对数组进行冒泡排序，根据年龄进行升序排序
//	bubbleSort(heroArray,len);
//
//	//4.将排序后的结果打印输出
//	cout << "排序后数组元素： " << endl;
//	printHero(heroArray, len);
//
//	system("pause");
//	return 0;
//}