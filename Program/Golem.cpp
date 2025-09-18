#include "Golem.h"

#include "stdafx.h"

Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;
}

void Golem::Describe()
{
	cout << "산을 지키는 수호 몬스터 입니다. 적대적 대상들만 공격합니다. \n" << endl;
}

Golem::~Golem()
{
	cout << "Destroy Golem" << endl;
}
