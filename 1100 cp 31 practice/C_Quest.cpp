#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int>a(n), b(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        

        int tillMax = -1;
        int maxExperiencePoint = 0, currExperience = 0;

        for(int i=0; i<n; i++){
            if(i >= k) break;
            
            currExperience += a[i];

            int totalRemTime = k - (i+1);
            if(totalRemTime > 0){
                tillMax = max(tillMax, b[i]);

                int totalExp = totalRemTime * tillMax;

                maxExperiencePoint = max(maxExperiencePoint, currExperience + totalExp);
            }

            else maxExperiencePoint = max(maxExperiencePoint, currExperience);
        }

        cout<<maxExperiencePoint<<"\n";
    }

    return 0;
}