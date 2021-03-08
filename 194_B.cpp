#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   vector<pair<int, int> > P(n);
   

   for(int i = 0; i < n; i++){
      int a,b;
      cin >> a>> b;
      P.at(i) = make_pair(a, b);
   }

   sort(P.begin(), P.end());

   int c = P.at(0).first + P.at(0).second;

   int b_min = 1000000;

   for(int i=1;i<n;i++){
      if(b_min > P.at(i).second) {
         b_min = P.at(i).second;
      }
   }

   int d = max(P.at(0).first ,b_min);

   int ans = min(c,d);

   cout << ans << endl;

}