// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans = 0, a[8][8] = {};
  string s;
  cin >> n >> s;

  for (int i = 0; i < (n - 1); ++i) {
    if (!a[s[i] - 'a'][s[i + 1] - 'a']) {
      a[s[i] - 'a'][s[i + 1] - 'a'] = 1;
      ++ans;
    }
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

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