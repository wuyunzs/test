#include "menu.h"

void h_add() {
	int num ;
	cout << "����������ְ������:";
	cin >> num;
	ofstream ofs;
	int* uid = new int(-1);
	string* name = new string("error");
	int* post = new int(-1);
	for (int i = 1;i <= num;i++) {
		cout << "�������" << i << "����ְ����ţ�";
		cin >> *uid;
		cout << "�������" << i << "����ְ�����֣�";
		cin >> *name;
		cout << "��ѡ���ְ���ĸ�λ" << endl;
		cout << "1.��ְͨ��" << endl;
		cout << "2.����" << endl;
		cout << "3.�ϰ�" << endl;
		cin >> *post;
		ofs.open("info.txt", ios::app);
		if (*post == 1) {
			person* p = new staff(*uid, *name, *post);
			string s = p->Info();
			s += p->duty();
			ofs << s << endl;
			ofs.close();
		}
		else if (*post == 2) {
			person* p = new manager(*uid, *name, *post);
			string s = p->Info();
			s += p->duty();
			ofs << s << endl;
			ofs.close();
		}
		else if (*post == 3) {
			person* p = new boss(*uid, *name, *post);
			string s = p->Info();
			s += p->duty();
			ofs << s << endl;
			ofs.close();
		}
		else {
			cout << "�������" << endl;
			return;
		}
	}

	delete uid;
	uid = NULL;
	delete name;
    name = NULL;
	delete post;
    post = NULL;
}