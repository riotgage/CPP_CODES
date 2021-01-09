/*
    Given a string, find all possible palindromic partitions of given string.
*/
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    string str=s;
     for (int i = 0; i < s.size() / 2; i++) 
        swap(s[i], s[s.size() - i - 1]); 
    if(str==s)return true;
    return false;
}
void generatePalindrome(string s){
    
}

int main(){
    string s;
    cin>>s; 
    generatePalindrome(s);
}