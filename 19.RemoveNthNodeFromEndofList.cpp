//19.RemoveNthNodeFromEndofList
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
using namespace std;

#define VI vector <int>
#define PII pair <int, int>
#define LL long long
#define ULL unsigned long long
#define LDB long double
#define MEM(a,b) memset(a,(b),sizeof(a))
#define FOR(i,a,b) for (auto i = (a); i <= (b); i++)
#define FORD(i,a,b) for (auto i = (a); i >= (b); i--)
#define FORV(CAKE,it) for(auto it =CAKE.begin(); it != CAKE.end(); it++)
#define FIT(it,v) for (auto it = v.begin(); it != v.end(); it++)
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x < 0)?-(x):x)
#define IN(A, B, C)  (B) <= (A) && (A) <= (C)
#define AIN(A, B, C) assert(IN(A, B, C))

#define MP make_pair
#define PB push_back

#define FF first
#define SS second
#define PI 3.14159265358979323846
#define MOD 1000000007
#define INF INT_MAX //Infinity

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
    ListNode* removeNthFromEnd_0(ListNode* head, int n)
		{
			int sz=0;
			ListNode* temp = head;
			while(temp != NULL)
			{
				sz++;
				temp = temp->next;
			}
			temp = head;
			//Delete sz-n+1 th element from beginning
			if(sz-n+1 != 1)
			{
				for(int i=1; i<sz-n; i++)
					temp = temp->next;
				temp->next = (temp->next)->next;
			}
			else
				head = head->next;

			return head;
    }

		ListNode* removeNthFromEnd(ListNode* head, int n)
		{
			ListNode *temp1 = head, *temp2 = head;
			for(int i=1; i<n+1; i++)
				temp1 = temp1->next;
			if(temp1 != NULL)
			{
				while(temp1->next != NULL)
				{
					temp1 = temp1->next;
					temp2 = temp2->next;
				}
				temp2->next = (temp2->next)->next;
			}
			else
				head = head->next;

			return head;
    }
};
