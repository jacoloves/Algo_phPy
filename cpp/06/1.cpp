#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, ans;
  
  cin >> A  >> B;

  ans = A * B;

  if (ans%2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }
  
}
