#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

#define ALL(x) (x).begin(),(x).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define MP make_pair
#define PB push_back
#define REP(i,n)  FOR(i,0,n)
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

int main()
{
    string s;

    std::cin >> s;

    for ( int i = 0; i < s.length(); ) {
        if ( s[i] == 'c' ) {
            i += 2;
        } else if ( s[i] == 'o' ) {
            i++;
        } else if ( s[i] == 'k' ) {
            i++;
        } else if ( s[i] == 'u' ) {
            i++;
        } else {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }

    std::cout << "YES" << std::endl;
    
    return 0;
}
