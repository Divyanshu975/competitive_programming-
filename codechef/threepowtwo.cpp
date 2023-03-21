/*Problem
Chef is given a number in form of its binary representation 
�
S, having length 
�
N.

Determine if the number can be represented as a sum of exactly three non-negative powers of 
2
2. Please refer to samples for further explanation.

Note that 
�
S will NOT contain leading zeros.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
�
N, the length of the binary string.
The next line contains the string 
�
S, the binary representation of a number.
Output Format
For each test case, output YES if the number can be represented as sum of exactly three powers of 
2
2.

You can print each character in uppercase or lowercase. For example YES, yes, Yes, and yES are all considered the same.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t,n,count;
    string s;
    cin>>t;
    
    while(t--){
        count=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                count++;
        }
        if(s=="0"||s=="10"||s=="1")
            cout<<"no"<<endl;
        else if(count<=3)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
	
	return 0;
}
