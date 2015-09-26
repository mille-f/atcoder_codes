#include <bits/stdc++.h>

using namespace std;

#define ALL(x) (x).begin(),(x).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define MP make_pair
#define PB push_back
#define REP(i,n) FOR(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define SIZE(x) int((x).size())

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector<int> VI;
typedef vector<VI> VVI;

const double INF = 1e100;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const int mod = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

ll calc(int year) {
  ll cnt = 0;
  int i;

  for ( i = 0; i <= year; i += 4 )    cnt++;
  for ( i = 0; i <= year; i += 100 )  cnt--;
  for ( i = 0; i <= year; i += 400 )  cnt++;

  return cnt;
}

int main(void) {
  int a, b;
  cin >> a >> b;

  cout << calc(b) - calc(a-1) << endl;

  return 0;
}