#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int num;
        cin>>num;
        if(num%3 != 0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}