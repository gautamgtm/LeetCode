//16.3SumClosest
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

int threeSumClosest(vector<int>& nums, int target)
{
	int minm = INT_MAX;
	bool sign=1;
	sort(nums.begin(), nums.end());
	int sz = nums.size();

	for(int i=0; i<sz; i++)
	{
		int start = i+1, end = sz-1;
		while(start<end)
		{
			int temp = nums[i]+nums[start]+nums[end];
			if(temp == target)
			{
				minm = 0;
				break;
			}
			else
			if(temp < target)
			{
				if(minm > abs(temp-target))
				{
					minm = abs(temp-target);
					sign = 0;
				}
				start++;
			}
			else
			{
				if(minm > abs(temp-target))
				{
					minm = abs(temp-target);
					sign = 1;
				}
				end--;
			}
		}
	}

	if(sign)
		return target + minm;
	else
		return target - minm;
}

int main()
{
	int n, target;
	scanf("%d %d", &n, &target);
	vector<int> myVector(n);
	FOR(i,0,n-1)
		scanf("%d", &myVector[i]);

	printf("%d\n", threeSumClosest(myVector, target));

}
