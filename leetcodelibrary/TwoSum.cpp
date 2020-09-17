#include "TwoSum.h"
#include <iostream>
#include "unordered_map"

using namespace std;

vector<int> TwoSum::CalculateTwoSum(vector<int>& nums, int target)
{
	vector<int> output;
	unordered_map<int, int> myMap;

	int size = nums.size();

	if (size < 3)
	{
		output.push_back(0);
		output.push_back(1);
		return output;
	}
	else
	{

		for (int i = 0; i < size; i++)
		{
			int difference = target - nums[i];

			if (myMap.find(nums[i]) == myMap.end())
			{

				myMap[difference] = i;
			}
			else
			{
				output.push_back(myMap[nums[i]]);
				output.push_back(i);
				break;
			}

		}
	}

	return output;
}
