#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int Ax, Ay, Bx, By, Cx, Cy;

        cin>>Ax>>Ay;
        cin>>Bx>>By;
        cin>>Cx>>Cy;

        vector<int>xAxis = {Ax, Bx, Cx}; 
        vector<int>yAxis = {Ay, By, Cy};  

        sort(xAxis.begin(), xAxis.end());
        sort(yAxis.begin(), yAxis.end());

        int horizontal = abs(Ax - xAxis[1]);
        int vertical   A= abs(Ay - yAxis[1]);

        cout<<horizontal + vertical + 1 <<"\n";
    }

    return 0;
}