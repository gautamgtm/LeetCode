//14.LongestCommonPrefix
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

string longestCommonPrefix(vector<string>& strs)
{
	if(!strs.size())
		return "";
	int minSz = strs[0].length(), idx = 0;
	for(int i=1; i<strs.size(); i++)
	{
		int sz = strs[i].length();
		minSz = min(minSz, sz);
	}

	bool isEnd = false;
	for(int i=0; i<minSz; i++)
	{
		for(int j=1; j<strs.size(); j++)
		{
			if(strs[j][i] != strs[j-1][i])
			{
				isEnd = true;
				break;
			}
		}
		if(isEnd)
			break;
		idx++;
	}

	return strs[0].substr(0,idx);
}

int main()
{
	int n;
	cin>>n;
	vector<string> myV(n);
	FOR(i,0,n-1)
		cin>>myV[i];

	cout<<longestCommonPrefix(myV);

}
