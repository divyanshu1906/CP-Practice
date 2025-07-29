#include<bits/stdc++.h>
using namespace std;

bool isDangerous(string &str){
    int consecutiveCount = 1;  
    for(int i = 1; i < str.size(); i++) {
        if(str[i] == str[i - 1]) {
            consecutiveCount++;  
            if(consecutiveCount >= 7) return true;  
        } 
        else{
            consecutiveCount = 1;  
        }
    }
    return false;
}
int main(){
    string str;
    cin>>str;
    if(isDangerous(str)){
        cout<< "YES";
    }
    else cout<<"NO";
    return 0;
}