#include "Slime.h"

#include "stdafx.h"

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;
}

void Slime::Describe()
{
	cout << "�����Ÿ��� ��ü�� ������� �����Դϴ�. ������ ���� �� �п��ϴ� Ư���� ������ϴ�. \n" << endl;
}

Slime::~Slime()
{
	cout << "Destroy Slime" << endl;
}
