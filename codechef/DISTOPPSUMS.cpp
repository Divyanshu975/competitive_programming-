#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    int n,a;
    cin>>t;
    while(t--){
        a=1;
        cin>>n;
        for(int i=1;i<=n/2;i++){
            cout<<a++<<" ";
        }
        a=n;
        for(int i=n/2+1;i<=n;i++){
            cout<<a--<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}
