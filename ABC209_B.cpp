#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   int n,x;
   cin >> n >> x;

  vector<int> A(n);
  for(int i = 0; i < n; i++){
    cin >> A.at(i);
  }

  for(int i = 0; i < n; i++){
    if((i+1)%2 == 0) {
      A.at(i)--;
    }
  }
  ll sum = 0;
  for(auto a :A) {
    sum += a;
  }
  string ans = "No";
  if(sum <= x) {
    ans = "Yes";
  }

   cout << ans << endl;

}