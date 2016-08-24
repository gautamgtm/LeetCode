//1.TwoSum
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

vector<int> twoSum(vector<int>& nums, int target)
{
  vector<int> temp;
  int sz = nums.size();
  int start=0, end=sz-1;

  vector<pair<int,int> > myVector;
  for(int i=0; i<sz; i++)
  {
    myVector.push_back(make_pair(nums[i],i));
  }
  sort(myVector.begin(), myVector.end());

  while(start<end)
  {
    if(myVector[start].first + myVector[end].first == target)
    {
      temp.push_back(myVector[start].second);
      temp.push_back(myVector[end].second);
      break;
    }
    else
    if(myVector[start].first + myVector[end].first > target)
      end--;
    else
      start++;
  }

  return temp;
}

int main()
{
	cin.sync_with_stdio(0);
	int n;
  scanf("%d", &n);

  VI numbers(n);
  FOR(i,0,n-1)
    scanf("%d", &numbers[i]);

  int sum;
  scanf("%d", &sum);

  VI ans = twoSum(numbers, sum);
  FIT(it,ans)
    printf("%d ", *it);

}
