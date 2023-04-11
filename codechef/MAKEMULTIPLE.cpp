#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==1)
            cout<<"yes"<<endl;
        else if(b<2*a&&b!=a)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
	return 0;
}
