#include<bits/stdc++.h> 
using namespace std;

int minimumOperations(int a, int b, int x, int y){
    if(a == b) return 0;
    
    if(a > b){
        if(a%2 == 0) return -1;
        else{
            return a-1 == b ? y : -1;
        }
    }
    
    int operations = 0;
    while(a < b){
        if(a % 2 == 0){
            operations += min(x, y);
        }
        else{
            operations += x;
        }
        a++;
    }
    return operations;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        cout<<minimumOperations(a, b, x, y)<<"\n";
    }
    return 0;
}