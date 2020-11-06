// vector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	//五种初始化
	vector <int> a(10);
	vector <int> b(10, 1);
	vector<int> c(b);
	vector <int> d(b.begin(), b.begin() + 3);
	int e[5] = { 1,2,3,4,5 };
	vector<int> f(e, e + 4);

	//vector操作
	a.empty();	//为空返回True，否则False
	a.max_size();	//返回能容纳最大元素个数
	a.size();		//返回容器中元素个数
	a.capacity();		//容器能够存储的元素个数
	a.reserve(100);	//确保capacity()>=n
	a.resize(15, 1);	//确保返回后size()==n;如果之前size()<n，那么用元素x值补全
	a.size();		//返回容器中元素个数
	a.front();	//返回容器中第一个元素的引用（容器必须非空）
	a.back();	//返回容器中最后一个元素的引用
	a.at(3);		//返回下标为pos的元素的引用；如果下标不正确，则抛出异常out_of_range
	a.operator[](2);	// 返回下标为pos的元素的引用（下标从0开始；如果下标不正确，则属于未定义行为。)
	a.push_back(6);	//容器尾端添加元素
	a.pop_back();	//弹出最后一个元素
}
