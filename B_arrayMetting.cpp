#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;

        vector<int> nums1(n), nums2(n);

        for (int i = 0; i < n; i++){
            cin >> nums1[i];
        } 

        for (int i = 0; i < n; i++) {
            cin >> nums2[i];
        }

        map<int, int> maxLen1, maxLen2;

        int curr = nums1[0];
        int len = 1;
        for (int i = 1; i < n; i++) {
            if (nums1[i] == curr) {
                len++;
            } else {
                maxLen1[curr] = max(maxLen1[curr], len);
                curr = nums1[i];
                len = 1;
            }
        }
        maxLen1[curr] = max(maxLen1[curr], len); 

        curr = nums2[0];
        len = 1;
        for (int i = 1; i < n; i++) {
            if (nums2[i] == curr) {
                len++;
            } else {
                maxLen2[curr] = max(maxLen2[curr], len);
                curr = nums2[i];
                len = 1;
            }
        }
        maxLen2[curr] = max(maxLen2[curr], len); 

        int ans = 1;
        for(auto &it : maxLen1){
            int ele = it.first;
            int freq = it.second;
            
            int ele2 = 0;
            if(maxLen2.count(ele) != 0){
                ele2 = maxLen2[ele];
            }

            ans = max(ans, freq + ele2);
        }

        for (auto &it : maxLen2) {
            if (maxLen1.count(it.first) == 0) {
                ans = max(ans, it.second);
            }
        }

        cout<<ans<<"\n";
    }
}