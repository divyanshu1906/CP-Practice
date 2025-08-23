#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        int zeroCount = 0, oneCount = 0;
        
        for(char &ch : str){
            if(ch=='0') zeroCount++;
            else oneCount++;
        }

        if(zeroCount == oneCount){
            cout<<0<<endl;
            continue;
        }

        for(char &ch : str){
            if(ch=='0' && oneCount > 0){
                oneCount--;
            }
            else if(ch=='1' && zeroCount > 0){
                zeroCount--;
            }
            else break;
        }

        cout << ((oneCount == 0) ? zeroCount : oneCount) << endl;
    }
    return 0;
}