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
  int n, ave, sum = 0, ans = 0;
  cin >> n;
  int a[n+1];
  REP(i,n) { cin >> a[i]; sum += a[i]; }
  ave = sum / n;

  if (sum % n != 0) { puts("-1"); return 0; }
  REP(i, n-1) {
    if (a[i] != ave) {
      a[i+1] += a[i] - ave;
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
