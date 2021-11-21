#include <iostream>
#include "View.h";

int main()
{
	View* view = new View();

	view->addSelects();
	view->showSelects();
	view->showSelect();

	return 0;
}