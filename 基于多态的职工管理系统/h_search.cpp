#include "menu.h"
void h_search()
{
	fstream fs("info.txt", ios::in);
	string  un;
	cout << "������Ҫ���ҵ�Ա����Ż�������";
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
			cout << "û���ҵ��ñ�ţ�" << endl;
			return;
		}
        cout << "û���ҵ���������" << endl;
	}


}