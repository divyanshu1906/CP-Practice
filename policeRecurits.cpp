#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int policeAvailable = 0;
    int unNoticedCases = 0;

    for(int i=0; i<n; i++){
        if(arr[i] != -1){
            policeAvailable += arr[i];
        }
        else if(arr[i] == -1 && policeAvailable != 0){
            policeAvailable--;
        }
        else{
            unNoticedCases++;
        }
    }

    cout<<unNoticedCases;
    return 0;

}