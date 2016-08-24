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

int reverse(int x)
{
  bool sign=0;
  if(x<0)
  {
    sign = 1;
    x = -1*x;
  }
  int A[100], idx=0;
  while(x>0)
  {
    A[idx++] = x%10;
    x = x/10;
  }

  long long int y=0, i=0;
  while(!A[i])
    i++;
  for(i; i<idx; i++)
  {
    y = 10*y + A[i];
  }
  if(sign)
    y = -1 * y;

  if(y != (int)y)
    return 0;
  return (int)y;
}
int main()
{
	int n;
	cin>>n;
	cout<<reverse(n);

}
