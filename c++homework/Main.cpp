#include <iostream>
#include <stdlib.h>
#include "Menu.h"
using namespace std;

int main() 
{
	Menu menu;
	int selected = 0;
	string inputString;
	int inputInt;

	while (selected != 5) {
		system("PAUSE");

		cout << '\n' << "(1) 메뉴객체 생성 │ (2) 선택항목 추가 │ (3) 메뉴내용 출력 │ (4) 메뉴내용 중 항목 선택 │ (5) 종료 " << endl;
		cout << '\n' << "원하는 항목을 선택하세요: ";
		cin >> selected;

		switch (selected) {
		case 1:
			cout << '\n' << "메뉴객체 이름을 입력하세요: ";
			cin >> inputString;
			menu.registerMenu(inputString);
			break;
		case 2: 
			cout << '\n' << "선택항목 이름을 입력하세요: ";
			cin >> inputString;
			menu.registerOption(inputString);
			break;
		case 3:
			cout << '\n' << "메뉴객체는 다음과 같은 내용을 출력하고 항목을 선택하게 합니다" << endl;
			menu.printMenuObject();
			break;
		case 4:
			int returned;
			cout << '\n' << "생성된 메뉴를 이용해 위 선택항목 중 1개를 선택할 수 있습니다." << endl;
			menu.printMenuObject();
			cout << '\n' << "항목번호를 선택하세요: ";
			cin >> inputInt;
			returned = menu.selectOption(inputInt);
			menu.printSelectOption(returned);
			break;
		case 5:
			break; 
		}
		cout << '\n';
	}

	return 0;
}

void Menu::registerMenu(string name) {
	this->menu = name;
	cout << '\n' << "'" << this->menu << "' 메뉴객체가 생성되었습니다" << endl;
}

void Menu::registerOption(string selectItem) {
	this->options[this->optionIndex] = selectItem;
	cout << '\n' << "'" << this->options[this->optionIndex] << "' 선택항목이 생성되었습니다" << endl;
	this->optionIndex++;
}

void Menu::printMenuObject() {
	cout << '\n' << this->menu << endl;
	for (int i = 0; i < this->optionIndex; i++) {
		cout << '\n' << "[" << i + 1 << "]" << this->options[i];
	}
	cout << '\n';
}

int Menu::selectOption(int option) {
	if (option >= 1 && option < this->optionIndex + 1) {
		return option;
	}
	else {
		return -1;
	}
}

void Menu::printSelectOption(int returned) {
	if (returned == -1) {
		cout << '\n' << "메뉴객체가 -1 을 반환했습니다. 항목 선택값이 올바른 범위가 아님을 의미합니다." << endl;
	}
	else {
		cout << '\n' << "메뉴객체가 반환한 번호는 " << returned << " 입니다." << endl;
		cout << '\n' << "선택된 항목의 내용: '" << this->options[returned - 1] << "'" << endl;
	}
}