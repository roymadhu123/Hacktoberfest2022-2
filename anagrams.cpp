#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string ss){
        
      
     int a[26]={0};
     int b[26]={0};
       int idx;
       for(int i=0;i<s.length();i++){
        //   if(s[i]>='A'&&s[i]<='Z'){
        //       idx=s[i]-'A';
        //   }
           if(s[i]>='a'&&s[i]<='z'){
               idx=s[i]-'a';
           }
           a[idx]+=1;
       }
       for(int i=0;i<ss.length();i++){
        //   if(ss[i]>='A'&&ss[i]<='Z'){
        //       idx=ss[i]-'A';
        //   }
           if(ss[i]>='a'&&ss[i]<='z'){
               idx=ss[i]-'a';
           }
           b[idx]+=1;
       }
       for(int i=0;i<26;i++){
           if(a[i]!=b[i]){
               return false;
           }
       }
       return true;
    

        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
