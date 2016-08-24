//5.LongestPalindromicSubstring
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

string longestPalindrome_v1(string s)
{
	int sz=s.size(), maxm=1, start;
	if(sz == 1)
		return s;

	bool DP[sz][sz]={0};
	// Length 1
	for(int i=0; i<sz; i++)
	{
		DP[i][i] = 1;
		start = i;
	}
	//Length 2
	for(int i=0; i<sz-1; i++)
	{
		DP[i][i+1] = (s[i]==s[i+1]);
		if(DP[i][i+1])
		{
			start = i;
			maxm = 2;
		}
	}

	//Length 3 & More
	for(int k=3; k<=sz; k++)
	{
		for(int i=0; i<sz-k+1; i++)
		{
			int j=i+k-1;
			DP[i][j] = (DP[i+1][j-1] && (s[i]==s[j]));
			if(DP[i][j])
			{
				maxm = k;
				start = i;
			}
		}
	}
	return s.substr(start,maxm);
}

string longestPalindrome_v2(string s)
{
	int sz=s.size(), maxm=1, start;
	if(sz == 1)
		return s;

	string revS = s;
	reverse(begin(revS), end(revS));

	//Find longest Substring


}
int main()
{
	string s;
	cin>>s;
	cout<<longestPalindrome_v2(s);

}
