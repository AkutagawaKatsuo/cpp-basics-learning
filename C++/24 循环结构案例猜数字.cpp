//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//
//	int val = 0;
//	
//	while(1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "数字过大" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "数字过小" << endl;
//		}
//		else
//		{
//			cout << "恭喜您猜对了！" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
////改进后的代码增加输入有效性判断和提示信息，提升用户体验。
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//    // 初始化随机数种子
//    srand((unsigned int)time(NULL));
//    // 生成1~100的随机数
//    int num = rand() % 100 + 1;
//
//    int val = 0;
//    cout << "请猜一个1~100之间的数字：" << endl;
//
//    while (1)
//    {
//        cin >> val;
//        // 检查输入是否有效
//        if (cin.fail()) {
//            cin.clear(); // 清除错误标志
//            cin.ignore(1024, '\n'); // 丢弃错误输入
//            cout << "输入无效，请输入数字：" << endl;
//            continue;
//        }
//        if (val > num)
//        {
//            cout << "数字过大" << endl;
//        }
//        else if (val < num)
//        {
//            cout << "数字过小" << endl;
//        }
//        else
//        {
//            cout << "恭喜您猜对了！" << endl;
//            break;
//        }
//    }
//
//    system("pause");
//    return 0;
//}