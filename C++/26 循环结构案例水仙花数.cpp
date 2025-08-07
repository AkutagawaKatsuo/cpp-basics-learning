//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 100;
//	//打印所有的三位数字
//	do
//	{
//		int a = 0;//个位
//		int b = 0;//十位
//		int c = 0;//百位
//
//		a = num % 10;//获取个位数字
//		b = num / 10 % 10;//获取十位数字
//		c = num / 100;//获取百位数字
//
//		if (a * a * a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//
//		num++;
//	} while (num < 1000);
//
//	system("pause");
//	return 0;
//}