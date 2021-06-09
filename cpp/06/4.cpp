#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  int cnt = 0;
  char tmp;

  cin >> n;

  tmp = n[0];

  for (int i=0; i<4; i++) {
    if (tmp == n[i]) {
      cnt++;
    } else {
      tmp = n[i];
      cnt = 1;
    }

    if (cnt >= 3)
      break;
    
  }

  if (cnt >= 3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
