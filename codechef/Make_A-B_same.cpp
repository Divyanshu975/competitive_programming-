#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t,n,counta,countb,flag;
    cin>>t;
    while(t--){
        flag=0;
        cin>>n;
        counta=0;
        countb=0;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
                counta++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==1)
                countb++;
        }
        for(int i=0;i<n;i++){
            if(b[i]==0&&a[i]==1)
                flag=1;
        }
        // if(counta==0 && countb==0){
        //     flag=0;
        // }
        // if(flag==0 && counta==0)
        //     flag=0;
        if(counta==0 && countb !=0){
            flag=1;
        }
        if(a[0]!=b[0] || a[n-1]!=b[n-1])
            flag=1;
        if(flag==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        
        
    }
	
	return 0;
}
