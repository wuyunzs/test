#include "menu.h"
#include <regex>
#include <cstdlib>
void h_sort() {
	ifstream ifs;
	ifs.open("info.txt", ios::in);
	ofstream ofs("temp.txt", ios::out);
	int sortWay = -1;

	cout << "请选择排序方式(1.升序 2.降序)：";
	cin >> sortWay;


	if (sortWay != 1 && sortWay != 2)
	{
		cout << "输入错误！" << endl;
		return;
	}
	string line;
	int f_size = 0;
	int arr_value = 0;
	while (getline(ifs, line)) {
		f_size++;
		cout << line << endl;
	}
	ifs.close();//读取完后需要关闭
	ifs.open("info.txt", ios::in);//重新打开
	string* content = new string[f_size];
	cout << "=====================================" << endl;
	while (getline(ifs, line)) {
		content[arr_value++] = line;
	}

	regex parrten("\\d+");
	smatch matches;

	if (sortWay == 1)
	{
		for (int i = 0; i < f_size - 1; i++)
		{
			for (int j = 0; j < f_size - i - 1; j++)
			{
				string s1 = content[j];
				string s1_id;

				if (regex_search(s1, matches, parrten))
				{
					s1_id = matches[0];
				}


				string s2 = content[j + 1];
					string s2_id;

				if (regex_search(s2, matches, parrten))
				{
					s2_id = matches[0];
				}

				if (stoi(s1_id) > stoi(s2_id))
				{
					string temp = content[j];
					content[j] = content[j + 1];
					content[j + 1] = temp;
				}
			}


		}
	}
	else if (sortWay == 2)
	{
		for (int i = 0; i < f_size - 1; i++)
		{
			for (int j = 0; j < f_size - i - 1; j++)
			{
				string s1 = content[j];
				string s1_id;

				if (regex_search(s1, matches, parrten))
				{
					s1_id = matches[0];
				}


				string s2 = content[j + 1];
				string s2_id;

				if (regex_search(s2, matches, parrten))
				{
					s2_id = matches[0];
				}

				if (stoi(s1_id) < stoi(s2_id))
				{
					string temp = content[j];
					content[j] = content[j + 1];
					content[j + 1] = temp;
				}
			}


		}
	}

	for (int i = 0; i < f_size; i++)
	{
		ofs << content[i] << endl;
	}
	ifs.close();
	ofs.close();

	remove("info.txt");
	rename("temp.txt", "info.txt");
	delete[] content;
	
}