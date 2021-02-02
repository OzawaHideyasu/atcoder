#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   double n,xml;
   cin >> n >> xml;


   vector<double> V(n);
   vector<double> P(n);

   int ans = -1;
   for(int i = 0; i < n; i++){
      cin >> V.at(i);
      cin >> P.at(i);
   }

   double drink = 0;
   for(int i = 0; i < n; i++){
      drink += V.at(i)*P.at(i);
      if(drink > xml* 100) {
         ans = i+1;
         break;
      }
   }

   cout << ans << endl;


}