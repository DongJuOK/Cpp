#include "Skeleton.h"
#include <iostream>

using namespace std;

Skeleton::Skeleton()
{
	name = "Skeleton";
	health = 100;
	attack = 5;
	defense = 1;
}

void Skeleton ::Describe()
{
	cout << "주술로 무덤에서 부활한 몬스터 입니다. 움직일 때 마다 달그락거리는 소리가 납니다. \n" << endl;
}
