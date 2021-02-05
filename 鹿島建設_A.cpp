#include <bits/stdc++.h>
#include <set>
#include <numeric>
using namespace std;
typedef long long ll;



int main(){
   int n;
   cin >> n;

   ll num = 1;
   for(int i=2;i<=n;i++){
      num = lcm(num,i);
   }


   cout << num + 1<< endl;
}