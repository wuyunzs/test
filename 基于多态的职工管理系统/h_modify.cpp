#include "menu.h"
void h_modify() {
	fstream fs("info.txt", ios::in);
	ofstream ofs("temp.txt", ios::out);
	int id;
	cout << "������Ҫ�޸ĵı�ţ�";
	cin >> id;
	int findYN ;
	string line;
	string name;
	int positon;
	while (getline(fs, line)) {

		if (line.find(to_string(id)) != string::npos)
		{
			findYN = 1;
			cout << line << endl;
			cout << "�������µ���Ϣ��" << endl;
			cout << "��ţ�";
			cin >> id;
			cout << "���֣�";
			cin >> name;
			cout << "���(1.��ͨԱ�� 2.���� 3.�ϰ�)��";
			cin >> positon;
			person* p;

			if (positon == 3)
			{
				p = new boss(id, name, positon);
				ofs << p->Info() << endl;
			}
			else if (positon == 2)
			{
				p = new manager(id, name, positon);
				ofs << p->Info() << endl;
			}
			else {
				p = new staff(id, name, positon);
				ofs << p->Info() << endl;
			}
			continue;

		}
		ofs << line << endl;

	}
	fs.close();
	ofs.close();
	if (findYN == 1)
	{
		remove("info.txt");
		rename("temp.txt", "info.txt");
	}
	else
	{
		remove("temp.txt");
	}
}