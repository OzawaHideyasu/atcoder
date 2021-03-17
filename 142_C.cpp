#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   vector<pair<int, int>> A(n);

   for(int i = 0; i < n; i++){
      int a;
      cin >> a;
      A.at(i) = make_pair(a, i+1);
   }
   sort(A.begin(),A.end());

   for(int i = 0; i < n; i++){
      cout << A.at(i).second << endl;
   }

}