#pragma once
#include "Select.h";

class Selects 
{
	Select* next = nullptr;

	Select* node;

	Select* prev = nullptr;

public: 
	void add(Select* select)
	{
		next = select;
	}
};