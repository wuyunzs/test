#include "menu.h"

void h_menu() {
	int select;
	bool flag = true;
	while (flag) {
		cout << "**************************************" << endl;
		cout << "\t\t0.退出管理程序" << endl;
		cout << "\t\t1.增加职工信息" << endl;
		cout << "\t\t2.显示职工信息" << endl;
		cout << "\t\t3.删除离职职工" << endl;
		cout << "\t\t4.修改职工信息" << endl;
		cout << "\t\t5.查找职工信息" << endl;
		cout << "\t\t6.按照编号排序" << endl;
		cout << "\t\t7.清空所有文档" << endl;
		cout << "*************************************" << endl;
		cout << "请输入你的选择：";
		cin >> select;
		switch (select)
		{
		case 0:
			flag = false;
			break;
		case 1:
			h_add();
			break;
		case 2:
			h_show();
			break;
		case 3:
			h_del();
			break;
		case 4:
			h_modify();
			break;
		case 5:
			h_search();
			break;
		case 6:
			h_sort();
			break;
		case 7:
			h_clear();
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			break;
		}

	}
	cout << "欢迎下次使用" << endl;
}