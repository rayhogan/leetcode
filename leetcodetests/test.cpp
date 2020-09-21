#include "pch.h"
#include "../leetcodelibrary/TwoSum.h";
#include "../leetcodelibrary/AddTwoNumbers.h";
#include <vector>
using namespace std;

TEST(TwoSumTests, TwoSum) {

	vector<int> input{ 3, 2 , 4 };
	vector<int> result = TwoSum::CalculateTwoSum(input, 6);

  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 2);
}

TEST(AddTwoNumbers, TwoNumbers) {

	// Arrange
	ListNode* left1 = new ListNode(2);
	ListNode* left2 = new ListNode(4);
	ListNode* left3 = new ListNode(3);

	left2->next = left3;
	left1->next = left2;

	ListNode* right1 = new ListNode(5);
	ListNode* right2 = new ListNode(6);
	ListNode* right3 = new ListNode(4);

	right2->next = right3;
	right1->next = right2;

	// Act
	ListNode* result = AddTwoNumbers::add(left1, right1);

	vector<int> values;

	ListNode* curr = result;
	while (curr != nullptr)
	{
		values.push_back(curr->val);
		curr = curr->next;
	}

	// Assert
	EXPECT_EQ(values[0], 7);
	EXPECT_EQ(values[1], 0);
	EXPECT_EQ(values[2], 8);
	
}