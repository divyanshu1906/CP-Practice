#include<bits/stdc++.h>
using namespace std;

//ceil(a / b) can be written as a + b - 1 / b

int main(){

    int t;
    cin >> t;

    while(t--){
        int k , a , b , x, y;
        cin >> k >> a >> b >> x >> y;

        if(b > a){
            swap(a , b);
            swap(x , y);
        }

        int maxlogs1 = 0;
        if(k >= b){
        maxlogs1 = ((k - b + y) / y);
        }



        int maxlogs2 = 0;
        if(k >= a){
        maxlogs2 = ((k - a + x) / x);
        k -= x * maxlogs2;
        }
        if(k >= b) maxlogs2 += ((k - b + y) / y);

        cout << max(maxlogs1 , maxlogs2) << "\n";

    }

    return 0;
}