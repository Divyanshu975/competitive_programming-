#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,m;
	while(t--){
	    long long int diff=0;
	    cin>>n>>m;
	    int arr[m];
	    for(int i=0;i<m;i++){
	        cin>>arr[i];
	        diff=diff+(long long int)arr[i];
	    }
	   // sort(arr,arr+m);
	   // for(int i=0;i<m;i++){
	        
	   // }
	    long long int sum=(long long int)n*((long long int)n+1)/2;
	   cout<<sum-diff<<endl;
	   //cout<<1000000000-9;
	}
	return 0;
}
