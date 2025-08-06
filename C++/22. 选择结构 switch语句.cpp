//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int score = 0;
//	cout << "请您给电影打分：" << endl;
//	cin >> score;
//	cout << "您打的分数是：" << score << endl;
//
//	switch (score)
//	{
//	case 10:
//		cout << "您认为这个电影是经典" << endl;
//		break;
//	case 9:
//		cout << "您认为这个电影是经典" << endl;
//		break;
//	case 8:
//		cout << "您认为这个电影非常好" << endl;
//		break;
//	case 7:
//		cout << "您认为这个电影非常好" << endl;
//		break;
//	case 6:
//		cout << "您认为这个电影一般" << endl;
//		break;
//	case 5:
//		cout << "您认为这个电影一般" << endl;
//		break;
//	default:
//		cout << "您认为这个电影是烂片" << endl;
//		break;
//	}
//
//	//switch的缺点：判断时只能是整型或者字符型，不可以是一个区间
//	//switch的优点：结构清晰，执行效率高
//
//	system("pause");
//	return 0;
//}
//
////改进后的代码
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 定义并初始化电影评分变量
//	int score = 0;
//
//	// 提示用户输入评分
//	cout << "请您给电影打分：" << endl;
//	cin >> score;
//
//	// 检查输入是否有效
//	if (cin.fail()) {
//		cout << "输入无效，请输入整数分数！" << endl;
//	}
//	/*fail() 是 C++ 输入流（如 cin）的成员函数，用于判断上一次输入操作是否失败。
//	具体含义：
//	当输入的数据类型与变量类型不匹配，或者输入流发生错误时，fail() 会返回 true。
//	例如，要求输入整数，用户却输入了字母或其他非法字符，cin.fail() 就会为真。*/
//
//	else {
//		cout << "您打的分数是：" << score << endl;
//
//		// 根据评分输出评价
//		switch (score)
//		{
//		case 10:
//		case 9:
//			cout << "您认为这个电影是经典" << endl;
//			break;
//		case 8:
//		case 7:
//			cout << "您认为这个电影非常好" << endl;
//			break;
//		case 6:
//		case 5:
//			cout << "您认为这个电影一般" << endl;
//			break;
//		default:
//			cout << "您认为这个电影是烂片" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
////代码改进后合并相同输出的case分支，代码更简洁。
////增加输入有效性判断，防止非整数输入导致异常。