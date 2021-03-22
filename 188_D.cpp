#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;
 
int main(){
   int n;
   cin >> n;
   ll num = pow(2,n);
   vector<pair<ll,ll>> A(num/2), B(num/2);
 
   // string ans = "No";
   for(int i = 0; i < num; i++){
      ll a;
      cin >> a;
      if(i <= num/2-1) {
         A.at(i) = make_pair(a, i+1);
      }else{
         B.at(i - num/2) = make_pair(a, i+1);
      }
   }
   sort(A.begin(),A.end());
   sort(B.begin(),B.end());
 
   ll ans = A.at(num/2-1).second;
   if(A.at(num/2-1).first > B.at(num/2-1).first) {
      ans = B.at(num/2-1).second;
   }
 
 
   cout << ans << endl;
 
}