/*#pragma once
#include <iostream>
#include <stdlib.h>
#include "Menu.h"

void Menu::registerMenuName(string name) {
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

void Menu::printSelectOption(int option) {
	if (option == -1) {
		cout << '\n' << "�޴���ü�� -1 �� ��ȯ�߽��ϴ�. �׸� ���ð��� �ùٸ� ������ �ƴ��� �ǹ��մϴ�." << endl;
	}
	else {
		cout << '\n' << "�޴���ü�� ��ȯ�� ��ȣ�� " << option << " �Դϴ�." << endl;
		cout << '\n' << "���õ� �׸��� ����: '" << this->options[option - 1] << "'" << endl;
	}
} */