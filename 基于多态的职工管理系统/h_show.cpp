#include "menu.h"
void h_show() {
     ifstream ifs("info.txt", ios::in);

     if (ifs.is_open()) {
         char ch[1024] = {0};
         while (ifs.getline(ch,sizeof(ch))) {
         cout << ch << endl;
         }
         ifs.close();
         cout << "员工显示完毕" << endl;

     }
     else {
     cout << "文件打开失败" << endl;
     }

}