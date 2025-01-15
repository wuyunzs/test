#include "menu.h"
void h_clear() {
	ofstream ofs("info.txt", ios::out|ios::trunc);
    ofs.close();
	cout << "Çå¿Õ³É¹¦£¡" << endl;
}