#pragma once//防止头文件重名
#include<iostream>
using namespace std;

//身份的抽象基类
class identity {
public:

	//操作菜单 纯虚函数
	virtual void operMenu() = 0;

	//用户名
	string m_Name;
	//密码
	string m_Pwd;

};