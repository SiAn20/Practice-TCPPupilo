// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int minb = 0, mayb = 0;
  string s, ans;
  cin >> s;

  // armo mi resultado
  for (int i = s.size(); i >= 0; --i) {
    if (s[i] == 'b') {
      ++minb;
    } else if (s[i] == 'B') {
      ++mayb;
    } else if (islower(s[i])) {
      if (minb > 0)
        --minb;
      else
        ans += s[i];
    } else if (isupper(s[i])) {
      if (mayb > 0)
        --mayb;
      else
        ans += s[i];
    }
  }

  reverse(ans.begin(), ans.end());
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