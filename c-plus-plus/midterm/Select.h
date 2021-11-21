#pragma once
class Select
{
	static const int maxLength = 20;
	char* name;

public:
	Select()
	{

	}

	Select(char* name)
	{
		if (sizeof(name) > maxLength)
		{
			throw;
		}

		setName(name);
		printf("선택항목 [%s] 가 추가되었습니다.\n\n", name);
	}

	void setName(char* name)
	{
		this->name = name;
	}

	char* getName()
	{
		return this->name;
	}
};

