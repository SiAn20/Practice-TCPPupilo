// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;

int p[27000], n;
string s[3][1100];

void solve() {
  cin >> n;
  int ans[3] = {0, 0, 0};
  for (int i = 0; i < 27000; ++i) {
    p[i] = 0;
  }
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> s[i][j];
      p[(s[i][j][0] - 'a') * 26 * 26 + (s[i][j][1] - 'a') * 26 + s[i][j][2] -
        'a']++;
    }
  }
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < n; ++j) {
      if (p[(s[i][j][0] - 'a') * 26 * 26 + (s[i][j][1] - 'a') * 26 +
            s[i][j][2] - 'a'] == 1) {
        ans[i] += 3;
      }
      if (p[(s[i][j][0] - 'a') * 26 * 26 + (s[i][j][1] - 'a') * 26 +
            s[i][j][2] - 'a'] == 2) {
        ans[i]++;
      }
    }
  }
  for (int i = 0; i < 3; ++i) {
    cout << ans[i] << ' ';
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

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
