#include "menu.h"

void h_add() {
	int num ;
	cout << "请输入增加职工数量:";
	cin >> num;
	ofstream ofs;
	int* uid = new int(-1);
	string* name = new string("error");
	int* post = new int(-1);
	for (int i = 1;i <= num;i++) {
		cout << "请输入第" << i << "个新职工编号：";
		cin >> *uid;
		cout << "请输入第" << i << "个新职工名字：";
		cin >> *name;
		cout << "请选择该职工的岗位" << endl;
		cout << "1.普通职工" << endl;
		cout << "2.经理" << endl;
		cout << "3.老板" << endl;
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
			cout << "输入错误" << endl;
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