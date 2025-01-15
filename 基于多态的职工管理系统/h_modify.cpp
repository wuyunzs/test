#include "menu.h"
void h_modify() {
	fstream fs("info.txt", ios::in);
	ofstream ofs("temp.txt", ios::out);
	int id;
	cout << "请输入要修改的编号：";
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
			cout << "请输入新的信息：" << endl;
			cout << "编号：";
			cin >> id;
			cout << "名字：";
			cin >> name;
			cout << "编号(1.普通员工 2.经理 3.老板)：";
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