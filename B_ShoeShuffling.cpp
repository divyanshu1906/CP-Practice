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
        cin>>n;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        map<int, int>freq;
        for(int i=0; i<n; i++){
            freq[a[i]]++;
        }

        bool isSingle = false;
        for(auto i : freq){
            if(i.second == 1){
                isSingle = true;
                break;
            }
        }

        if(isSingle) {
            cout<<-1<<"\n";
            continue;
        }

        vector<int>students(n);
        for(int i=0; i<n; i++){
            students[i] = i+1;
        }

        int l=0, r=0;

        while(r<n){
            if(a[l] == a[r]){
                r++;
            }
            else{
                rotate(students.begin()+l, students.begin()+l+1, students.begin()+r);
                l = r;
            }
        }
        rotate(students.begin()+l, students.begin()+l+1, students.begin()+r);

        for(auto i : students){
            cout<<i<<" ";
        }
        cout<<"\n";

    }

    return 0;
}