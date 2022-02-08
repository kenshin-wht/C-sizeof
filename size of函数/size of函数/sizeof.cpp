#include<iostream>
using namespace std;

int main() {


	//整形 short (2) int (4)   long  (4)  long long (8)
	//可以用size of求出数据类型所占内存大小
	//语法：  sizeof（ 数据类型 /变量）

	short num1 = 10;
	cout << "short所占内存空间为：" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int所占内存空间为：" << sizeof(int) << endl;

	long num3 = 10;
	cout << "long所占内存空间为：" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long所占内存空间为：" << sizeof(num4) << endl;

	//整形大小比较
	//short < int <= long<=long long

	system("pause");



}