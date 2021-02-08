#include <bits/stdc++.h>
#include <set>
#include <numeric>
using namespace std;
typedef long long ll;

template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}
template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}
int main(){
   int n;
   cin >> n;
   vector<int> A(n);

   for(int i = 0; i < n; i++) {
      cin >> A.at(i);
   }

   int max_orange = 0;
   for(int l = 0; l < n; l++){
      int x = A.at(l);
      for(int r = l; r < n; r++){
         chmin(x,A.at(r));
         chmax(max_orange, x * (r - l + 1));
      }
   }

   cout << max_orange << endl;
}