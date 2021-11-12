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

		cout << '\n' << "(1) �޴���ü ���� �� (2) �����׸� �߰� �� (3) �޴����� ��� �� (4) �޴����� �� �׸� ���� �� (5) ���� " << endl;
		cout << '\n' << "���ϴ� �׸��� �����ϼ���: ";
		cin >> selected;

		switch (selected) {
		case 1:
			cout << '\n' << "�޴���ü �̸��� �Է��ϼ���: ";
			cin >> inputString;
			menu.registerMenu(inputString);
			break;
		case 2: 
			cout << '\n' << "�����׸� �̸��� �Է��ϼ���: ";
			cin >> inputString;
			menu.registerOption(inputString);
			break;
		case 3:
			cout << '\n' << "�޴���ü�� ������ ���� ������ ����ϰ� �׸��� �����ϰ� �մϴ�" << endl;
			menu.printMenuObject();
			break;
		case 4:
			int returned;
			cout << '\n' << "������ �޴��� �̿��� �� �����׸� �� 1���� ������ �� �ֽ��ϴ�." << endl;
			menu.printMenuObject();
			cout << '\n' << "�׸��ȣ�� �����ϼ���: ";
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
	cout << '\n' << "'" << this->menu << "' �޴���ü�� �����Ǿ����ϴ�" << endl;
}

void Menu::registerOption(string selectItem) {
	this->options[this->optionIndex] = selectItem;
	cout << '\n' << "'" << this->options[this->optionIndex] << "' �����׸��� �����Ǿ����ϴ�" << endl;
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
		cout << '\n' << "�޴���ü�� -1 �� ��ȯ�߽��ϴ�. �׸� ���ð��� �ùٸ� ������ �ƴ��� �ǹ��մϴ�." << endl;
	}
	else {
		cout << '\n' << "�޴���ü�� ��ȯ�� ��ȣ�� " << returned << " �Դϴ�." << endl;
		cout << '\n' << "���õ� �׸��� ����: '" << this->options[returned - 1] << "'" << endl;
	}
}