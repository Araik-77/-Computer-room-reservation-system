#pragma once//��ֹͷ�ļ�����
#include<iostream>
using namespace std;

//��ݵĳ������
class identity {
public:

	//�����˵� ���麯��
	virtual void operMenu() = 0;

	//�û���
	string m_Name;
	//����
	string m_Pwd;

};