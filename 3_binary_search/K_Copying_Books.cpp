// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define int long long
#define pb push_back
#define vi vector<int>
#define all(x) x.begin(), x.end()
using namespace std;

const int INF = 1e9;

bool esPosible(int mid, const vi &a, int k) {
  int sum = 0, cnt = 1;
  for (int x : a) {
    if (sum + x > mid) {
      cnt++;
      sum = 0;
    }
    sum += x;
  }
  return cnt <= k;
}
vi construirRespuesta(int mid, const vi &a, int k) {
  vi res;
  int sum = 0, cnt = 1, n = a.size();
  int separadoresRestantes = k - 1;
  for (int i = n - 1; i >= 0; i--) {
    if ((sum + a[i] > mid) || (i < separadoresRestantes)) {
      res.pb(-1);
      sum = 0;
      cnt++;
      separadoresRestantes--;
    }
    sum += a[i];
    res.pb(a[i]);
  }
  reverse(all(res));
  return res;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int l = *max_element(all(a)) - 1, r = INF;
  while (r - l > 1) {
    int mid = l + (r - l) / 2;
    if (esPosible(mid, a, k))
      r = mid;
    else
      l = mid;
  }
  vi ans = construirRespuesta(r, a, k);
  for (int x : ans) {
    if (x == -1)
      cout << "/ ";
    else
      cout << x << " ";
  }
  cout << endl;
}

signed main() {
  fast;
  int t;
  cin >> t;
  while (t--)
    solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/