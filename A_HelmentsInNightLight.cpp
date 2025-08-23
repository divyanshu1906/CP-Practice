#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;


int main(){
    fastt;

    long long t;
    cin>>t;

    while(t--){
        long long n, p;
        cin >> n >> p;
        vector<long long>resident(n), cost(n);

        for(int i=0; i<n; i++){
            cin>>resident[i];
        }
        for(int i=0; i<n; i++){
            cin>>cost[i];
        }

        vector<pair<long long, long long>>optimizedPath(n);
        for(int i=0; i<n; i++){
            optimizedPath[i] = {cost[i], resident[i]};
        }

        sort(optimizedPath.begin(), optimizedPath.end());

        long long informationReached = 1;
        long long costTaken = p;

        for(auto &v : optimizedPath){
            long long sharingCost = v.first;
            long long canBeReached = v.second;

            if(sharingCost >= p) break;

            if(informationReached + canBeReached > n){
                costTaken += (n - informationReached) * sharingCost;
                informationReached = n;
                break;
            }
            else{
                costTaken += canBeReached * sharingCost;
                informationReached += canBeReached;
            }
        }
        
        
        costTaken += p * (n-informationReached);


        cout<<costTaken<<"\n";
    }

    return 0;
}