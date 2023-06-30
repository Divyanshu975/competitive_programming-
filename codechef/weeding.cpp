#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,m,k;
	int last_weed;
	while(t--){
	    cin>>n>>m>>k;
	    int arr[n]={0};
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	   // cout<<arr[n-1]<<endl;
	    if(arr[n-1]+(k-1)<=m)
	        cout<<"yes"<<endl;
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}
