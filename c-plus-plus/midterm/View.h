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
		cout << "�޴��� �̸��� �����ּ���." << endl;
		ctrl = new Controller();
	}

	void addSelects()
	{
		cout << "���� �׸��� �̸��� �Է����ּ���. �ִ� �� �� ���� �Է� �����մϴ�." << endl;

		bool isRun = true;

		while (isRun)
		{
			cout << "�߰��� ������ �ʴ´ٸ� q �� �Է����ּ���." << endl;

			isRun = ctrl->addSelects();
		}
	}

	void showSelect()
	{
		cout << "����� ���� �׸��� ��ȣ�� �Է����ּ���." << endl;

		bool isRun = true;

		while (isRun)
		{
			cout << "�� �̻� ����� ��ġ ������ q �� �Է����ּ���." << endl;

			isRun = ctrl->showSelect();
		}
	}

	void showSelects()
	{
		cout << "\n" << ctrl->getMenu()->getTitle() << " �޴��� ���� �׸��Դϴ�.\n" << endl;
		ctrl->showSelects();
	}
};