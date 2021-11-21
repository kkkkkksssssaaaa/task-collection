#pragma once
#include "Controller.h";
#include <iostream>

using namespace std;

class View
{
	Controller* ctrl;

public:
	View()
	{ 
		cout << "메뉴의 이름을 정해주세요." << endl;
		ctrl = new Controller();
	}

	void addSelects()
	{
		cout << "선택 항목의 이름을 입력해주세요. 최대 열 개 까지 입력 가능합니다." << endl;

		bool isRun = true;

		while (isRun)
		{
			cout << "추가를 원하지 않는다면 q 를 입력해주세요." << endl;

			isRun = ctrl->addSelects();
		}
	}

	void showSelect()
	{
		cout << "출력할 선택 항목의 번호를 입력해주세요." << endl;

		bool isRun = true;

		while (isRun)
		{
			cout << "더 이상 출력을 원치 않으면 q 를 입력해주세요." << endl;

			isRun = ctrl->showSelect();
		}
	}

	void showSelects()
	{
		cout << "\n" << ctrl->getMenu()->getTitle() << " 메뉴의 선택 항목입니다.\n" << endl;
		ctrl->showSelects();
	}
};