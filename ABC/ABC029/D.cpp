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

int main(void) {
  long n;
  long cycle = 1;
  long ans = 0;

  cin >> n;
  REP(i,9) {
    long num = (n / cycle) % 10;
    cycle *= 10;

    long pattern = n / cycle;
    ans += pattern * (cycle / 10);

    if ( num == 1 ) { ans += (n % (cycle / 10)) + 1; }
    else if ( num > 1 ) { ans += cycle / 10; }
  }

  cout << ans << endl;

  return 0;
}