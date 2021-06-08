#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, ans;
  
  cin >> A;
  cin >> B;

  ans = A % 500;

  if (ans <= B) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}
