#include "menu.h"
void h_del() {
	fstream fs("info.txt", ios::in);
	if (!fs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;

	}
	cout << "请输入要删除的员工编号：";
	int findYesOrNo=0;
	int id;
	cin >> id;
	string ch;
	ofstream ofs("temp.txt", ios::out);
	while (getline(fs, ch)) {
		if (ch.find(to_string(id))!=string::npos)//找到
		{
			findYesOrNo = 1;
			continue;
		}
		ofs << ch << endl;
	}
	if (findYesOrNo==0)
	{
		cout << "没有该编号或姓名的员工" << endl;
	}
	else
	{
		cout << "删除成功" << endl;
	}
	ofs.close();
	fs.close();
    remove("info.txt");
	rename("temp.txt", "info.txt");
}