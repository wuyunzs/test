#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void h_menu();
void h_add();
void h_show();
void h_del();
void h_modify();
void h_search();
void h_sort();
void h_clear();

class person {
public:



	string  Info() {

		return "��ţ�" + to_string(m_uid) + "  ������" + m_name + "  ��λ��" + position() + "  ְ��" + duty();
	}
	virtual string position() = 0;
	virtual string duty() = 0;


private:
	int m_uid;
	string m_name;
	int m_post;

};


class boss :public person {
public:
	boss(int id, string name, int post)  {
	}
	string position() {
		return "�ϰ�";
	}
	string duty() {
		return	"����˾��������";
	}
};
class manager :public person {
public:
	manager(int id, string name, int post){
	}
	string position() {
		return "����";
	}
	string duty() {
		return	"���ϰ巢���������·���Ա��";
	}
};
class staff :public person {
public:
	staff(int id, string name, int post){
	}
	string position() {
		return "Ա��";
	}
	string duty() {
		return  "��ɾ����·�������";
	}
};



