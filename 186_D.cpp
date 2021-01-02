#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   int n;
   cin >> n;
   vector<long long> A(n);

   long long sum =0;


   for(int i = 0 ; i < n; i++) {
       cin >> A.at(i);
   }
   sort(A.begin(), A.end());


   int coeff = n - 1;
   int i = 0;
   while(coeff > 0) {
       sum += coeff*(A.at(n-i-1) - A.at(i));
       coeff -= 2;
       i++;

   }

   cout << sum << endl;

}