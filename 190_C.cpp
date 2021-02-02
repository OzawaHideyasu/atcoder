#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n,m;
   cin >> n >> m;
   vector<int> A(m);
   vector<int> B(m);

   for(int i = 0; i < m; i++){
      cin >> A.at(i) >> B.at(i);
   }

   int k;
   cin >> k;

   vector<int> C(k);
   vector<int> D(k);
   string ans = "No";
   for(int i = 0; i < k; i++){
      cin >> C.at(i) >> D.at(i);
   }

   cout << ans << endl;
   cout << D.at(k-1) << endl;

}