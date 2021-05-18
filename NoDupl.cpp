#include <sstream>
#include <iostream>
#include <vector>
#include <map>


int main()
{
	bool duplicate{ false };
	std::string input{ "" };
	// If we used std:: cin >> then we would only get the first word as cin cuts off when space is encountered.
	std::getline(std::cin, input); 

	std::vector<std::string> v;
	std::stringstream ss(input);
	std::string word;

	while (ss >> word)
	{
		v.push_back(word);
	}

	std::map<std::string, int> countMap;
	for (auto & element : v)
	{
		auto result = countMap.insert(std::pair<std::string, int> (element, 1));
		if (!result.second)
		{
			result.first->second++;
		}
	}
	for (auto & element : countMap)
	{
		if (element.second > 1)
		{
			duplicate = true;
		}
	}

	if (duplicate)
	{
		std::cout << "no" << std::endl;
	}
	else 
	{
		std::cout << "yes" << std::endl;
	}

	return 0;
}

