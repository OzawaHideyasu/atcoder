#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   vector<int> A(n);
   vector<int> B(n);

   string ans = "No";
   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }
   
   ll sum =0;
   for(int i = 0; i < n; i++){
      cin >> B.at(i);
      sum += A.at(i)*B.at(i);
   }

   if(sum == 0) {
      ans ="Yes";
   }
   cout << ans << endl;
}