#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

/* alias */
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using vb = vector<bool>;

/* define short */
#define pb push_back
#define eb emplace_back
#define all(obj) (obj).begin(), (obj).end()

/* REP macro */
#define rep(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rrep(i, n, a) for (ll i = (n); i >= (ll)(a); --i)

/* debug */
#define debug(x)                                                               \
  cerr << "\033[33m(line:" << __LINE__ << ") " << #x << ": " << x << "\033[m"  \
       << endl;

template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

/* lib */
/*
struct dsu {
  int _n;
  vector<int> par, rank, siz;

  dsu(int n) : _n(n), par(n, -1), rank(n, 0), siz(n, 1){};

  int root(int x) {
    if (par[x] == -1)
      return x;
    else
      return par[x] = root(par[x]); // 経路圧縮
  }

  bool issame(int x, int y) { return root(x) == root(y); }

  bool unite(int x, int y) {
    int rx = root(x), ry = root(y);
    if (rx == ry)
      return false;
    // union by rank
    if (rank[rx] < rank[ry])
      swap(rx, ry); // ry側のrankが小さくなるようにする
    par[ry] = rx;
    if (rank[rx] == rank[ry])
      rank[rx]++;
    siz[rx] += siz[ry];
    return true;
  }

  int size(int x) { return siz[x]; }

  vector<vector<int>> groups() {
    vi roots(_n, 0), group_siz(_n, 0); // 各頂点のroot、rootと連結する頂点の個数
    rep(i, 0, _n) {
      roots[i] = root(i);
      group_siz[roots[i]]++;
    }

    vvi result(_n);
    rep(i, 0, _n) { result.reserve(group_siz[i]); }
    rep(i, 0, _n) { result[roots[i]].pb(i); }
    result.erase(remove_if(all(result), [&](const vi &v) { return v.empty(); }),
                 result.end()); // 空の要素を除外する
    return result;
  }
};

ll modpow(ll x, ll n, ll _mod = mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1)
      res = res * x % _mod;
    x = x * x % _mod;
    n >>= 1;
  }
  return res;
}
*/

int main() {
  int n; cin >> n;
  string s; cin >> s;
  auto i = s.find("ABC");
  if (i == string::npos) {
    cout << -1 << endl;
  } else {
    cout << i + 1 << endl;
  }
  return 0;
}
