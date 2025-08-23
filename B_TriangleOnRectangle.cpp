#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int X, Y;
        cin>>X>>Y;

        int n1;
        cin>>n1;

        vector<int>firstLine(n1);
        for(int i=0; i<n1; i++){
            cin>>firstLine[i];
        }

        int n2;
        cin>>n2;

        vector<int>secondLine(n2);
        for(int i=0; i<n2; i++){
            cin>>secondLine[i];
        }

        int n3;
        cin>>n3;

        vector<int>thirdLine(n3);
        for(int i=0; i<n3; i++){
            cin>>thirdLine[i];
        }

        int n4;
        cin>>n4;

        vector<int>fourthLine(n4);
        for(int i=0; i<n4; i++){
            cin>>fourthLine[i];
        }

        int originBase = (firstLine[n1-1] - firstLine[0]);
        int heightBase = (secondLine[n2-1] - secondLine[0]);

        int maxBaseHorizontal = max(originBase, heightBase);

        int originBase2 = (thirdLine[n3-1] - thirdLine[0]);
        int heightBase2 = (fourthLine[n4-1] - fourthLine[0]);

        int maxBaseVertical = max(originBase2, heightBase2);

        int ans = max((maxBaseHorizontal * Y), (maxBaseVertical * X));

        cout<<ans<<"\n";
    }
    return 0;
}