// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  string s, ans;
  cin >> s;

  for (char x : s) {
    if (!ans.empty() && ans.back() == x) {
      ans.pop_back();
    } else {
      ans.push_back(x);
    }
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/