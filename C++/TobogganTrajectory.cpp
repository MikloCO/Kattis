//https://adventofcode.com/2020/day/3
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ReadMapFromTerminal(std::vector<std::string>& a_list, unsigned int map_height)
{
	string input;
	for (int i = 0; i < map_height; i++)
	{
		getline(cin, input);
		a_list.push_back(input);
	}
}

int main()
{
	vector<string> a_list;
	unsigned int map_height = 323; 
	ReadMapFromTerminal(a_list, map_height);

	int countTrees = 0;
	int xPos = 0;
	
	for (int yPos = 1; yPos < map_height; yPos++)
	{
		if (a_list[yPos][(xPos += 3) % a_list[0].size()] == '#')
			countTrees++;	
	}
	cout << "Total passed trees= " << countTrees;

	return 0;
}
