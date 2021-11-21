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
		printf("�����׸� [%s] �� �߰��Ǿ����ϴ�.\n\n", name);
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

