#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;
   vector<int> A(n);

   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }

   sort(A.begin(), A.end(), greater<int>());
   A.erase(unique(A.begin(), A.end()), A.end());

   cout << A.at(1) << endl;

}