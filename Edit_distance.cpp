#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
const int NN = 2001;
 
int dp[NN][NN];
 
int editDist(string str1, string str2){
    int m = str1.length();
    int n = str2.length();
   

    for(int i = 0;i<=m;i++){
        for(int j = 0;j<=n;j++){
           
           
            if(i == 0 && j == 0)
                dp[i][j] = 0;
           
        
            else if(i == 0)
                dp[i][j] = j;
               
           
            else if(j == 0)
                dp[i][j] = i;
           
         
            else if(str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];
               
         
            else
                dp[i][j] = 1 + min(min(
                                    dp[i-1][j],   
                                    dp[i][j-1]), 
                                    dp[i-1][j-1] 
                                  );
        }
    }
    
    return dp[m][n];
}
 
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<editDist(s1,s2)<<endl;
    }
    return 0;
}