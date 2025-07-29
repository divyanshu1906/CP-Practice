#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin >> n;
        cin>> s;

        char first = s[0];
        char last = s[n - 1];

        string middle = s.substr(1, n - 2);

        bool found = false;
        vector<int>charFreq(26, 0);

        for (char ch : middle) {
            charFreq[ch-'a']++;

            if(charFreq[ch-'a'] >= 2){
                found = true;
                break;
            }
            
            if (ch == first || ch == last) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }
    return 0;
}