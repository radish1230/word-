// word.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

class Word {
public:
	Word(int ) { strcpy_s(spell, "abandon"); }
	Word() {};
	void InputInfo() {};
	void OutputInfo() { cout << spell << endl; 
	};
	char spell[10];
	
};
vector<Word>*Input_To_Vector()
{
	vector<Word>*p = new vector<Word>;  //注释
	ifstream infile("word.txt");
	
	if (!infile)
	{
		cout << "error";
}
	while(!infile.eof())
	{
		Word test;
		infile >> test.spell;
		p->push_back(test);
	}
	p->pop_back();
	return p;
}
int main()
{  /*
	Word a(1);
	a.InputInfo();
	fstream outfile("word.txt" ,ios::app|ios::binary);
	if (!outfile)
	{
		cout << "error" << endl;
	}
	//outfile << a.spell;

	outfile.write((char*)&a.spell, sizeof(a.spell));
	outfile.close();
	
	vector<Word>w;
	Word b;
	fstream infile("word.txt", ios::in | ios::binary);
	if (!infile)
	{
		cout << "error infile" << endl;

	}
	else {
		infile.read((char*)&b, sizeof(b));//按类中变量声明顺序，写进内存
		b.OutputInfo();
	}*/
	vector<Word>*file_to_vector = Input_To_Vector();
	vector<Word>::iterator it;
	it = file_to_vector->begin();
	for (; it != file_to_vector->end(); it++)
		cout << it->spell << endl;;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
