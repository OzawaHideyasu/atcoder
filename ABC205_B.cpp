#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   int n;
   cin >> n;
   vector<int> A(n);
   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }

   sort(A.begin(), A.end());
   vector<int> V;
   for(int i = 1; i <= n; i++){
      V.push_back(i);
   }

   string ans = "Yes";
   for(int i = 0; i < n; i++){
      if(A.at(i) != V.at(i)) {
         ans = "No";
      }
   }

   cout << ans << endl;

}