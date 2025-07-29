#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;

        char col = n[0];        
        char num = n[1];       

        vector<string>ans;

        for(char ch='a'; ch<='h'; ch++){
            if(ch == col) continue;
            string str = "";
            str += ch;
            str += num;
            ans.push_back(str);
        }

        for(char ch='1'; ch<='8'; ch++){
            if(ch==num) continue;
            string str = "";
            str += col;
            str += ch;
            ans.push_back(str);
        }

        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
    }
    return 0;
}