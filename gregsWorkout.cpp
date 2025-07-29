#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr(n);

    int prevMax = INT_MIN;
    int bicepsTrain = 0, chestTrain = 0, backTrain = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(i%3==0){
            chestTrain  += arr[i];
        }
        else if(i%3==1){
            bicepsTrain += arr[i];
        }
        else{
            backTrain += arr[i];
        }
    }

    if(chestTrain > bicepsTrain && chestTrain > backTrain){
        cout<<"chest";
    }
    else if(bicepsTrain > chestTrain && bicepsTrain > backTrain){
        cout<<"biceps";
    }
    else{
        cout<<"back";
    }

    return 0;
}