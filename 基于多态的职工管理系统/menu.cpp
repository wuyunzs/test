#include "menu.h"

void h_menu() {
	int select;
	bool flag = true;
	while (flag) {
		cout << "**************************************" << endl;
		cout << "\t\t0.�˳��������" << endl;
		cout << "\t\t1.����ְ����Ϣ" << endl;
		cout << "\t\t2.��ʾְ����Ϣ" << endl;
		cout << "\t\t3.ɾ����ְְ��" << endl;
		cout << "\t\t4.�޸�ְ����Ϣ" << endl;
		cout << "\t\t5.����ְ����Ϣ" << endl;
		cout << "\t\t6.���ձ������" << endl;
		cout << "\t\t7.��������ĵ�" << endl;
		cout << "*************************************" << endl;
		cout << "���������ѡ��";
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
			cout << "�����������������" << endl;
			break;
		}

	}
	cout << "��ӭ�´�ʹ��" << endl;
}