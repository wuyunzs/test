#include "menu.h"
void h_clear() {
	ofstream ofs("info.txt", ios::out|ios::trunc);
    ofs.close();
	cout << "��ճɹ���" << endl;
}