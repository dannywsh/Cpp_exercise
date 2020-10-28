// string.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
/********string构造***********/
	string s1;//默认初始化，空串
	string s2(s1);//拷贝初始化
	string s3 = s1;
	string s4("value");//常量串直接初始化；
	string s5(10, 'a');//10个连续的字符a组成的串；

/********string操作***********/
//	os << s1;			//输出字符串到流os
//	is >> s1;			//从流is输入，跳过头空格，遇到空格结束
//	getline(is, s);	//从流is中读出一行，赋值给s
	s1.empty();		//字符串为空则返回true,否则false;
	s1.size();			//返回s的字符个数
//	s1[n];				//返回s中的第n个字符，下标从0开始；
	s1 + s2;			//两个字符串连接
							//其中一个必须为字符串变量（不能两个都是常量）
//	!= , == ， <= , >= , <, >等逻辑关系判断

/********string中字符操作***********/
	string str{ "Listen to Dannywsh6 carefully !!!" };
	string str_lower, str_upper;
	char ch{ 'a' };

	for (auto i : str) {
		str_lower += tolower(i);		//转大写
		str_upper += toupper(i);	//转小写
	}

	isdigit(ch);			//c是数字
	isalpha(ch);		//c是字母
	islower(ch);		//c是小写字母
	isupper(ch);		//c是大写字母
	isalnum(ch);		//c是字母或数字
	iscntrl(ch);			//c是控制字符
	isgraph(ch);		//c不是空格可打印
	isprint(ch);		//c可打印（c为空格或有可视形式）
	ispunct(ch);		//c是标点符号（不是控制字符、数字、字母、可打印空白）
	isspace(ch);		//c是空白（空格、横向制表符、纵向制表符、回车、换行、进纸符）
	isxdigit(ch);		//c是十六进制数字
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
