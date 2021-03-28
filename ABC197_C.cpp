 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// const bitset<30> INF("111111111111111111111111111111");
const unsigned long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}

// ll binary(ll bina){
//     ll ans = 0;
//     for (int i = 0; bina>0 ; i++)
//     {
//         ans = ans+(bina%2)*pow(10,i);
//         bina = bina/2;
//     }
//     return ans;
// }

string toBinary(ll n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main(){
   int n;
   cin >> n;
   vector<bitset<30>> A(n);

   for(int i = 0; i < n; i++){
       ll a;
       cin >> a;
       bitset<30> bs(toBinary(a));
       A.at(i) = bs;
   }

    unsigned long long num = INF;
   for(int i = 1; i < n; i++){
       bitset<30> left;
       bitset<30> right;

       for(int j = 0; j < i; j++){
           left |=A.at(j);
        //    cout << left << endl;
       }

       for(int j = i; j < n; j++){
           right |=A.at(j);
        //    cout << right << endl;
       }

       bitset<30> xornum = left ^ right;

    //    cout << xornum.to_ullong()  << endl;
       
       chmin(num,xornum.to_ullong());
   }



   cout << num  << endl;

}