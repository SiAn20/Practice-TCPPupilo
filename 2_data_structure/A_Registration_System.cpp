#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  unordered_map<string, int> map; // mapa<key, valor>
  string text;
  int n;
  cin >> n;

  while (n--) {
    cin >> text;
    if (map[text] == 0) { // si no esta en el mapa lo metemos con valor 1
      cout << "OK" << endl;
      map[text]++;
    } else { // si esta en el mapa lo imprimimos con su valor y aumentamos su
             // valor
      cout << text << map[text]++ << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

// by Sidney Angelly Sahonero Garrado
