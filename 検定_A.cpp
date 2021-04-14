#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    smatch smatch;
    if (regex_match(s, smatch, regex("[0-9]{3}")))
    {
        cout << 2*stoi(s) << endl;
    }else{
        cout << "error" << endl;
    }

}