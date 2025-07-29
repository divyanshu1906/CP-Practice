#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        int n, target;
        cin>>n>>target;

        vector<int>classroom(n);
        for(int i=0; i<n; i++){
            cin>>classroom[i];
        }

        int totalStudents = 0;
        int l=0, r=0;

        int ans = 0;
        while(r<n){
            totalStudents += classroom[r];

            while(l<r && totalStudents > target){
                totalStudents -= classroom[l];
                l++;
            }

            if(totalStudents == target)ans++;
            r++;
        }
        cout<<ans<<"\n";
    return 0;
}