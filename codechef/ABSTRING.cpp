// Alice and Bob are playing a game. They have a common string 
// �
// S of length 
// �
// N. The players also have their individual strings 
// �
// A (belonging to Alice) and 
// �
// B (belonging to Bob) which are empty in the beginning. Game begins with Alice and both players take alternate turns.

// In her/his turn, the player picks a single character from string 
// �
// S, adds it to the end of their individual string and deletes the picked character from string 
// �
// S.

// The game continues until string 
// �
// S is empty. Find whether there exists a sequence of moves such that the strings 
// �
// A and 
// �
// B are same at the end of the game.

// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer 
// �
// N — the length of the string.
// The next line contains the strings 
// �
// S consisting of lowercase english alphabets.
// Output Format
// For each test case, output on a new line, YES if there exists a sequence of moves such that the strings 
// �
// A and 
// �
// B are same at the end of the game, and NO otherwise.

// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    
    cin>>t;
    while(t--){
        int flag=0;
        cin>>n;
        char arr[n];
        int hash [27]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            hash[arr[i]-96]++;
        }
        for(int i=0;i<27;i++){
            if(hash[i]%2!=0){
                flag=1;
                break;
            }
        }
        
        if(flag==1){
            cout<<"no"<<endl;
        }
        else
            cout<<"yes"<<endl;
         
        
        
    }
	return 0;
}
