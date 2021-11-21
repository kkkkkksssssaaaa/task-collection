#pragma once
#include "Select.h";

class Menu
{
	static const int maxSelect = 10;
	static const int maxLength = 20;
	char* title;

	Select* selects[maxSelect] = {
		new Select(), new Select(), new Select(),
		new Select(), new Select(), new Select(),
		new Select(), new Select(), new Select(),
		new Select()
	};

public:
	Menu(char* input)
	{
		if (sizeof(input) > maxLength)
		{
			throw;
		}

		title = input;
		printf("메뉴의 이름은 [%s] 입니다.\n\n", title);
	}

	bool add(Select* select)
	{
		bool isAdded = false;

		for (int i = 0; i < maxSelect; i++)
		{
			if (selects[i]->getName() == nullptr)
			{
				selects[i] = select;
				isAdded = true;

				i = sizeof(selects);
			}
		}

		return isAdded;
	}

	char* getTitle()
	{
		return this->title;
	}

	int getSelectsCount()
	{
		int count = 0;

		for (int i = 0; i < maxSelect; i++)
		{
			if (selects[i]->getName() != nullptr)
			{
				count++;
			}
		}

		return count;
	}

	Select* getSelect(int idx)
	{
		return selects[idx];
	}
};
