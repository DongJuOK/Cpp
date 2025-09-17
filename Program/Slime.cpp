#include "Slime.h"
#include <iostream>

using namespace std;

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;
}

void Slime::Describe()
{
	cout << "끈적거리는 액체로 만들어진 몬스터입니다. 공격을 받을 시 분열하는 특성을 지녔습니다. \n" << endl;
}