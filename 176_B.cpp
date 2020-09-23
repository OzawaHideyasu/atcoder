#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   string N;
   cin >> N;

   string ans = "No";

   int sum = 0;
   int length_N = N.length();
   for(int i=0; i<length_N; i++){
      sum += (N.at(i) - '0');
   }

   if(sum % 9 == 0) {
      ans = "Yes";
   }

   cout << ans << endl;

}