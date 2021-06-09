#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B, plan_a;
  
  cin >> N >> A  >> B;

  plan_a = N * A;

  cout << min(plan_a, B) << endl;
  
}
