#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    int num;
    int n;
    int count;
    cin>>t;
    while(t--){
        cin>>n;
        count=1;
        int a[n][n];
        num=n*n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j=j+2){
                // cout<<i<<" "<<j<<" "<<count;
                a[i][j]=count;
                count++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j=j+2){
                a[i][j]=count;
                count++;
            }
        }
        // cout<<a[1][1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            // cout<<a[0][0];
            cout<<endl;
        }
    }
	
	return 0;
}
