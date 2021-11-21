#pragma once
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

#include "Menu.h"
#include "Select.h";

using namespace std;

class Controller
{
	Menu* menu;

public:
	Controller() 
	{
		char* menuName = new char;

		cin >> menuName;

		menu = new Menu(menuName);
	}

	bool addSelects()
	{
		char* getText = inputText();

		if (isQuit(getText))
		{
			return false;
		}

		else
		{
			Select* select = new Select(getText);

			return menu->add(select);
		}
	}

	void showSelects()
	{
		for (int i = 0; i < menu->getSelectsCount(); i++)
		{
			printSelect((i + 1), menu->getSelect(i));
		}
	}

	bool showSelect()
	{
		char* getText = inputText();

		if (isQuit(getText))
		{
			return false;
		}

		else if (isValidNumber(menu->getSelectsCount(), getText))
		{
			int charToNumber = atoi(getText);
			int selectIdx = charToNumber - 1;

			printSelect(charToNumber, menu->getSelect(selectIdx));

			return true;
		}

		else
		{
			printMinusOne();

			return true;
		}
	}

	Menu* getMenu()
	{
		return this->menu;
	}

private:
	void printSelect(int idx, Select* select)
	{
		cout << idx << "." << select->getName() << endl;
	}

	char* inputText()
	{
		char* text = new char;
		cin >> text;

		return text;
	}

	bool isValidNumber(int maxCount, char* text)
	{
		int toInt = atoi(text);

		if (toInt < 1)
		{
			return false;
		}

		if (toInt > 10)
		{
			return false;
		}

		if (toInt > maxCount)
		{
			return false;
		}

		return true;
	}

	bool isOver(int max, char* text)
	{
		if (atoi(text) > max)
		{
			return false;
		}

		return true;
	}

	bool isQuit(char* text)
	{
		if (strcmp(text, "q") == 0)
		{
			return true;
		}

		return false;
	}

	void printMinusOne()
	{
		cout << "-1" << "\n" << endl;
	}
};

