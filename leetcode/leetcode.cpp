#include "pch.h"
#include <iostream>
#include "../leetcodelibrary/TwoSum.h"
#include <vector>
using namespace std;

int main()
{
	vector<int> input{ 3, 2 , 4 };
	vector<int> result = TwoSum::CalculateTwoSum(input, 6);

	for (int x : result)
		cout << x << ",";
}
