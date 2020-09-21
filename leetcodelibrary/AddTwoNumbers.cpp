#include "AddTwoNumbers.h"
ListNode* AddTwoNumbers::add(ListNode* l1, ListNode* l2)
{
	 ListNode* nextNode = new ListNode(0);
	 ListNode* curr = nextNode;
	 ListNode* p = l1; 
	 ListNode* q = l2;

	 int carry = 0;

	 while (p != nullptr || q != nullptr)
	 {
		 int x = (p != nullptr) ? p->val : 0;
		 int y = (q != nullptr) ? q->val : 0;

		 int sum = carry + x + y;

		 carry = sum / 10;
		 curr->next = new ListNode(sum % 10);
		 curr = curr->next;
		 if (p != nullptr) p = p->next;
		 if (q != nullptr) q = q->next;
	 }
	 if (carry > 0) {
		 curr = curr->next = new ListNode(carry);
	 }
	 return nextNode->next;
}
