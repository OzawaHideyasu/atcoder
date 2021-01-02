#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   string s;
   cin >> s;

   int first_s = stoi(s.substr(0,2));
   int second_s = stoi(s.substr(2,4));
   int first_cnt = 1;
   int second_cnt = 1;
   string ans = "NA";

   if(first_s > 0 && first_s < 13) {
       first_cnt = 0;
   }
   if(second_s > 0 && second_s < 13) {
       second_cnt = 0;
   }

   if(first_cnt == 0 && second_cnt == 0) {
       ans = "AMBIGUOUS";
   }
   
   if(first_cnt == 1 && second_cnt == 0) {
       ans = "YYMM";
   }
   
   if(first_cnt == 0 && second_cnt == 1) {
       ans = "MMYY";
   }


   cout << ans << endl;

}