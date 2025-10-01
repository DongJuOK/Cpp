#include "stdafx.h"
#include <unordered_set>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

	std::unordered_set<const char*> unordered_set;

	unordered_set.reserve(16);

	unordered_set.max_load_factor(2.0);

	unordered_set.insert("Trinity Force");
	unordered_set.insert("Sundered Sky");
	unordered_set.insert("Zhonya's Hourglass");

	unordered_set.insert("Ninja Tabi");
	unordered_set.insert("Death's Dance");
	unordered_set.insert("Blade of the Ruined King");

	unordered_set.insert("Immortal Shieldbow");
	unordered_set.insert("Berserker's Greaves");
	unordered_set.insert("Guardian Angel");

	cout << "Load Factor : " << unordered_set.load_factor() << endl;
	cout << "Bucket Count : " << unordered_set.bucket_count() << endl;

#pragma endregion


	return 0;
}

