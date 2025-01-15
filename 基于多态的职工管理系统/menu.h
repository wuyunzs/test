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

		return "编号：" + to_string(m_uid) + "  姓名：" + m_name + "  岗位：" + position() + "  职责：" + duty();
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
		return "老板";
	}
	string duty() {
		return	"管理公司所有事物";
	}
};
class manager :public person {
public:
	manager(int id, string name, int post){
	}
	string position() {
		return "经理";
	}
	string duty() {
		return	"将老板发布的任务下发到员工";
	}
};
class staff :public person {
public:
	staff(int id, string name, int post){
	}
	string position() {
		return "员工";
	}
	string duty() {
		return  "完成经理下发的任务";
	}
};



