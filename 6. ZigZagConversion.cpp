//6.ZigZagConversion
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

string convert(string text, int nRows)
{
	if(nRows == 1)
		return text;
	string temp;
	int sz = text.size();
	for(int i=0; i<sz; i++)
	{
		if(i%(nRows+nRows-2) == 0)
			temp.push_back(text[i]);
	}

	for(int i=1; i<=nRows-2; i++)
	{
		for(int j=0; j<sz; j++)
		{
			if((j%(nRows+nRows-2) == i) || (j%(nRows+nRows-2) == (nRows-1+nRows-1-i)))
				temp.push_back(text[j]);
		}
	}

	for(int i=0; i<sz; i++)
	{
		if(i%(nRows+nRows-2) == nRows-1)
			temp.push_back(text[i]);
	}

	return temp;
}

int main()
{
	int rows;
	string s;
	cin>>s>>rows;

	string ans = convert(s, rows);
	cout<<ans;
}
