////#include <iostream>
////using namespace std;
////
////int main()
////{
////    // 定义三只小羊的体重变量，并初始化为0
////    int num1 = 0;
////    int num2 = 0;
////    int num3 = 0;
////
////    // 输入三只小羊的体重
////    cout << "请输入小羊a的体重：" << endl;
////    cin >> num1;
////    cout << "请输入小羊b的体重：" << endl;
////    cin >> num2;
////    cout << "请输入小羊c的体重：" << endl;
////    cin >> num3;
////
////    // 判断三只小羊的体重关系
////    if (num1 > num2)
////    {
////        // a比b重，再判断a和c的关系
////        if (num1 > num3)
////        {
////            // a比c也重，a最重
////            cout << "小羊a最重" << endl;
////        }
////        else
////        {
////            // c比a重，c最重
////            cout << "小羊c最重" << endl;
////        }
////    }
////    else if (num1 == num2)
////    {
////        // a和b一样重
////        if (num1 > num3)
////        {
////            // a、b都比c重
////            cout << "小羊a，b一样重并且大于小羊c" << endl;
////        }
////        else if (num1 == num3) {
////            // 三只一样重
////            cout << "三只小羊一样重" << endl;
////        }
////        else
////        {
////            // c比a、b重
////            cout << "小羊c最重" << endl;
////        }
////    }
////    else if (num2 == num3)
////    {
////        // b和c一样重
////        if (num2 > num1)
////        {
////            // b、c都比a重
////            cout << "小羊b，c一样重并且大于小羊a" << endl;
////        }
////        else if (num2 == num1) {
////            // 三只一样重
////            cout << "三只小羊一样重" << endl;
////        }
////        else
////        {
////            // a比b、c重
////            cout << "小羊a最重" << endl;
////        }
////    }
////    else if (num1 == num3)
////    {
////        // a和c一样重
////        if (num1 > num2)
////        {
////            // a、c都比b重
////            cout << "小羊a，c一样重并且大于小羊b" << endl;
////        }
////        else if (num1 == num2) {
////            // 三只一样重
////            cout << "三只小羊一样重" << endl;
////        }
////        else
////        {
////            // b比a、c重
////            cout << "小羊b最重" << endl;
////        }
////    }
////    else 
////    {
////        // 以上情况都不满足，比较b和c
////        if (num2 > num3)
////        {
////            cout << "小羊b最重" << endl;
////        }
////        else
////        {
////            cout << "小羊c最重" << endl;
////        }
////    }
////
////    system("pause");
////    return 0;
////}
//
////改进后的代码，去除了冗余和覆盖不全的情况
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // 定义三只小羊的体重变量，并初始化为0
//    int num1 = 0;
//    int num2 = 0;
//    int num3 = 0;
//
//    // 输入三只小羊的体重
//    cout << "请输入小羊a的体重：" << endl;
//    cin >> num1;
//    cout << "请输入小羊b的体重：" << endl;
//    cin >> num2;
//    cout << "请输入小羊c的体重：" << endl;
//    cin >> num3;
//
//    // 首先判断三只小羊是否体重完全相同
//    if (num1 == num2 && num2 == num3) {
//        cout << "三只小羊一样重" << endl;
//    }
//    else {
//        // 找出最大体重和对应的小羊
//        int maxWeight = num1;
//        string result = "小羊a";
//        if (num2 > maxWeight) {
//            maxWeight = num2;
//            result = "小羊b";
//        }
//        if (num3 > maxWeight) {
//            maxWeight = num3;
//            result = "小羊c";
//        }
//
//        // 统计有几只小羊达到最大体重
//        int count = 0;
//        if (num1 == maxWeight) count++;
//        if (num2 == maxWeight) count++;
//        if (num3 == maxWeight) count++;
//
//        // 根据最大体重的小羊数量输出结果
//        if (count == 1) {
//            // 只有一只最重
//            cout << result << "最重" << endl;
//        }
//        else if (count == 2) {
//            // 两只并列最重，判断是哪两只
//            if (num1 == maxWeight && num2 == maxWeight)
//                cout << "小羊a和小羊b并列最重" << endl;
//            else if (num1 == maxWeight && num3 == maxWeight)
//                cout << "小羊a和小羊c并列最重" << endl;
//            else
//                cout << "小羊b和小羊c并列最重" << endl;
//        }
//        // 三只一样重的情况已在前面处理
//    }
//
//    system("pause");
//    return 0;
//}