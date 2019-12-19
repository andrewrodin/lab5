#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

string numbers[] = { "ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь","девять" };

int main() {
	SetConsoleOutputCP(1251);
	ifstream ifs("input.txt");
	char ch;
	while (ifs.get(ch)) {
		int num = ch - '0';
		if (num > -1 && num < 10)
			cout << numbers[num];
		else
			cout << ch;
		if (ch == '.') {
			cout << endl;
			ifs.get();
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
