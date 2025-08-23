#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        string a, b;
        cin>>a>>b;

        int totalSize = a.size() + b.size();

        int subArraySize = 0;

        for(int i=0; i<a.size(); i++){
            string str = "";
            for(int j=i; j<a.size(); j++){
                str += a[j];

                if(b.find(str) != string::npos){
                    subArraySize = max(subArraySize, j-i+1);
                }
            }
        }

        cout<<totalSize - (subArraySize * 2 )<<"\n";
    }
    return 0;
}