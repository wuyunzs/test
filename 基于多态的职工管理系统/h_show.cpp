#include "menu.h"
void h_show() {
     ifstream ifs("info.txt", ios::in);

     if (ifs.is_open()) {
         char ch[1024] = {0};
         while (ifs.getline(ch,sizeof(ch))) {
         cout << ch << endl;
         }
         ifs.close();
         cout << "Ա����ʾ���" << endl;

     }
     else {
     cout << "�ļ���ʧ��" << endl;
     }

}