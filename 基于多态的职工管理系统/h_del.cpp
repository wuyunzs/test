#include "menu.h"
void h_del() {
	fstream fs("info.txt", ios::in);
	if (!fs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;

	}
	cout << "������Ҫɾ����Ա����ţ�";
	int findYesOrNo=0;
	int id;
	cin >> id;
	string ch;
	ofstream ofs("temp.txt", ios::out);
	while (getline(fs, ch)) {
		if (ch.find(to_string(id))!=string::npos)//�ҵ�
		{
			findYesOrNo = 1;
			continue;
		}
		ofs << ch << endl;
	}
	if (findYesOrNo==0)
	{
		cout << "û�иñ�Ż�������Ա��" << endl;
	}
	else
	{
		cout << "ɾ���ɹ�" << endl;
	}
	ofs.close();
	fs.close();
    remove("info.txt");
	rename("temp.txt", "info.txt");
}