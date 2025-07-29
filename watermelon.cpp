#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    if(n%2==0 && n>2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}