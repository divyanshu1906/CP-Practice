#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main()
{
    fastt;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        n--;

        int msb = log2(n);
        vector<int>ans;

        int num = pow(2, msb)-1;
        while(num>=0){
            ans.push_back(num);
            num--;
        }

        num = pow(2, msb);
        while(num <= n){
            ans.push_back(num);
            num++;
        }

        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}