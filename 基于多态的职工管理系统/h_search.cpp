#include "menu.h"
void h_search()
{
	fstream fs("info.txt", ios::in);
	string  un;
	cout << "请输入要查找的员工编号或姓名：";
	int findYS=0;
	cin >> un;
	string line;
	while (getline(fs, line)) {
	
		if (line.find(un)!=string::npos)
		{
			cout << line << endl;
			return;
		}
		findYS = -1;
	}
	if (findYS==-1)
	{
		if (un.length()==1) {
			cout << "没有找到该编号！" << endl;
			return;
		}
        cout << "没有找到该姓名！" << endl;
	}


}