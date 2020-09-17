#include "pch.h"
#include "../leetcodelibrary/TwoSum.h";
#include <vector>
using namespace std;

TEST(TwoSumTests, TwoSum) {

	vector<int> input{ 3, 2 , 4 };
	vector<int> result = TwoSum::CalculateTwoSum(input, 6);

  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 2);
}