#include "../Program/stdafx.h"
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

struct Quest
{
	char grade;
	bool complete;
	std::string description;
};

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set

	//  std::unordered_set<const char*> unordered_set;
	//  
	//  unordered_set.reserve(16);
	//  
	//  unordered_set.max_load_factor(2.0);
	//  
	//  unordered_set.insert("Trinity Force");
	//  unordered_set.insert("Sundered Sky");
	//  unordered_set.insert("Zhonya's Hourglass");
	//  
	//  unordered_set.insert("Ninja Tabi");
	//  unordered_set.insert("Death's Dance");
	//  unordered_set.insert("Blade of the Ruined King");
	//  
	//  unordered_set.insert("Immortal Shieldbow");
	//  unordered_set.insert("Berserker's Greaves");
	//  unordered_set.insert("Guardian Angel");
	//  
	//  cout << "Load Factor : " << unordered_set.load_factor() << endl;
	//  cout << "Bucket Count : " << unordered_set.bucket_count() << endl;
	//  
	//  if (unordered_set.find("Guardian Angel") != unordered_set.end())
	//  {
	//  	cout << "the data exists..." << endl;
	//  }
	//  else
	//  {
	//  	cout << "the data does not exists..." << endl;
	//  }
	//  
	//  unordered_set.erase("Sundered Sky");
	//  
	//  for (const char* element : unordered_set)
	//  {
	//  	cout << element << endl;
	//  }

#pragma endregion

#pragma region unordered_map

	//  unordered_map<std::string , int> unordered_map;
	//  
	//  unordered_map["Potion"] = 2;
	//  unordered_map["Elixir"] = 1;
	//  unordered_map["Antidote"] = 2;
	//  unordered_map["Oil"] = 2;
	//  
	//  string item_name;
	//  
	//  std::cin >> item_name;
	//  
	//  if (unordered_map[item_name] > 0 && unordered_map.find(item_name) != unordered_map.end())
	//  {
	//  	unordered_map[item_name]--;
	//  
	//  	cout << item_name << "use" << endl;
	//  
	//  	if (unordered_map[item_name] <= 0)
	//  	{
	//  		unordered_map.erase(item_name);
	//  
	//  		cout << item_name << " All items acquired." << endl;
	//  	}
	//  }
	//  else
	//  {
	//  	cout << "Doesn't exist." << endl;
	//  }
	//  
	//  for (const auto & element : unordered_map)
	//  {
	//  	cout << "Name : " << element.first << " Quantity : " << element.second << endl;
	//  }

#pragma endregion

#pragma region set

	// std::set<const char*> set;
	// 
	// set.insert("MapleStory");
	// set.insert("LostArk");
	// set.insert("Dungeon & Fighter");
	// set.insert("SuddenAttack");
	// set.insert("Monster Hunter");
	// 
	// for (const auto & element : set)
	// {
	// 	cout << element << endl;
	// }
	// 
	// cout << "set empty : " << set.empty() << endl;
	// 
	// set.clear();
	// 
	// cout << "set size : " << set.size() << endl;
	// cout << "set max size : " << set.max_size() << endl;

#pragma endregion

#pragma region map

	//  std::map<std::string, Quest> map;
	//  
	//  map["Last Escape"] = { 'A', true, "Destroy the Core" };
	//  map["Clear the Village"] = { 'B', true, "Kill all of the Monter" };
	//  map["Errand"] = { 'C', false, "Deliver a letter" };
	//  
	//  for (const auto & element : map)
	//  {
	//  	cout << "Title : " << element.first << endl;
	//  	cout << "Grade : " << element.second.grade << endl; 
	//  	cout << "Description : " << element.second.description << endl;
	//  	cout << "complete : " << element.second.complete << endl;
	//  
	//  	cout << endl;
	//  }

#pragma endregion

#pragma endregion

	return 0;
}

