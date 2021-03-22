#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   ll n, k, q;
   cin >> n >> k >> q;
   vector<int> A(n,k-q);

   string ans = "No";
   for(int i = 0; i < q; i++){
       int a;
       cin >> a;
       A.at(a-1) += 1;
   }

   for(int i = 0; i < n; i++){
       if(A.at(i) > 0) {
           cout << "Yes" << endl;
       } else {
           cout << "No" << endl;
       }
   }
}