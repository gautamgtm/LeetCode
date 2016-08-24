//3.LongestSubstringWithoutRepeatingCharacters
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

int lengthOfLongestSubstring(string s)
{
	int maxm = 1, ch = 128, sz=s.size();
	int idx[ch] = {0};
	if(sz==0)
		return 0;
	for(int i=0; i<sz; i++)
	{
		if(!idx[s[i]])
			idx[s[i]] = i+1;
		else
		{
			for(int k=0; k<ch; k++)
			{
				if(idx[k]>0 && idx[k]<idx[s[i]])
				{
					maxm = max(maxm,i+1-idx[k]);
					idx[k] = 0;
				}
			}
			idx[s[i]] = i+1;
		}
	}

	for(int i=0; i<ch; i++)
	{
		if(idx[i])
			maxm = max(maxm,sz-idx[i]+1);
	}
	return maxm;
}

int main()
{
	string str;
	cin>>str;
	cout<<lengthOfLongestSubstring(str);

}
