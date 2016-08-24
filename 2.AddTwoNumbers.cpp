//2.AddTwoNumbers
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <climits>
#include <utility>
#include <assert.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        bool count = 0;
        ListNode *ptr1 = l1, *ptr2 = l2;
        while(ptr1->next != NULL && ptr2->next != NULL)
        {
          int num = ptr1->val + ptr2->val + count;
          count = num/10;
          num = num%10;
          ptr1->val = num;

          ptr1 = ptr1->next;
          ptr2 = ptr2->next;
        }

        int num = ptr1->val + ptr2->val + count;
        count = num/10;
        num = num%10;
        ptr1->val = num;

        if(ptr2->next != NULL)
          ptr1->next = ptr2->next;

        while(count && ptr1->next != NULL)
        {
          int num = ptr1->next->val + count;
          count = num/10;
          num = num%10;
          ptr1->next->val = num;
          ptr1 = ptr1->next;
        }
        if(count == 1)
        {
          //Create new node
          ListNode *newNode = (ListNode*) malloc(sizeof(ListNode));
          newNode->next = NULL;
          newNode->val = 1;
          ptr1->next = newNode;
        }

        return l1;
    }
};
