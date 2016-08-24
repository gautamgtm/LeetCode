//8.StringtoInteger(atoi)
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

int myAtoi(string str)
{
  int i=0, sign = 0, sz=str.size();
  long long int temp = 0;
  while(str[i] == ' ')
    i++;
  //Check if first non whitespace char is int or not
  if(str[i] == '+')
  {
    sign = 0;
    i++;
  }
  else
  if(str[i] == '-')
  {
    sign = 1;
    i++;
  }
  else
  if(str[i]-'0' < 0 || str[i]-'0' > 9)
    return 0;

  //Reach till the last int index
  for(i; i<sz; i++)
  {
    if(str[i]-'0' < 0 || str[i]-'0' > 9)
      break;
    temp = 10*temp + (str[i]-'0');
    if(temp>1e+15)
      break;
  }
  if(sign == 1)
    temp = -1 * temp;

  if(temp > 2147483647)
    return 2147483647;
  if(temp < (-2147483648))
    return (-2147483648);
  return temp;
}

int main()
{
	string s;
	cin>>s;
	cout<<myAtoi(s);

}
