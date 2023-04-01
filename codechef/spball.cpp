#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int b=1e6+1;
long long int fact[b];
int main() {
    fact[0]=1;
    fact[1]=1;
    int t,n;
    int a=1e9+7;
    for(int i=2;i<b;i++){
        fact[i]=(fact[i-1]*i)%a;
    }
    cin>>t;
    
    while(t--){
        int sum=0;    
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            sum=(sum+fact[arr[i]])%a;
        }
        cout<<sum<<endl;
    }
	
	return 0;
}
