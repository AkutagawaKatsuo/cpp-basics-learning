//#include <iostream>
//using namespace std;
//
////1.ֵ����
//void swap01(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////2.��ַ����
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////3.���ô��� �����ָ���޸�ʵ��
//void swap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	swap01(a, b);//ֵ���ݣ��ββ�������ʵ��
//	swap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��
//	swap03(a,b);//���ô��ݣ��βλ�����ʵ��
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//	return 0;
//}