//15.3Sum
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

vector<vector<int>> threeSum(vector<int>& nums)
{
	vector<vector<int>> ans;
	sort(nums.begin(), nums.end());
	int sz = nums.size(), i = 0;
	while(i<=sz-3)
	{
		int start = i+1, end = sz-1;
		while(start<end)
		{
			if(nums[i]+nums[start]+nums[end] == 0)
			{
				vector<int> temp;
				temp.push_back(nums[i]);
				temp.push_back(nums[start]);
				temp.push_back(nums[end]);
				ans.push_back(temp);
				start++;
				while((start<sz-1) && (nums[start] == nums[start-1]))
					start++;
				end--;
				while((end>i+1) && (nums[end] == nums[end+1]))
					end--;
				continue;
			}
			else
			if(nums[i]+nums[start]+nums[end] < 0)
				start++;
			else
				end--;
		}
		i++;
		while((i<=sz-3) && (nums[i] == nums[i-1]))
			i++;

	}

	return ans;
}

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> myVector(n);
	FOR(i,0,n-1)
		scanf("%d", &myVector[i]);

	vector<vector<int> > ans = threeSum(myVector);
	FOR(i,0,ans.size()-1)
	{
		FOR(j,0,ans[i].size()-1)
		{
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}

}
