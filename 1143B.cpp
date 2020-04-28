#include<bits/stdc++.h>
using namespace std;
long long binexp(int n){
 if(n==0)
  return 1;
  else if(n==1)
        return 9;
    else{
      long long res=binexp(n/2);
      if(n%2==0)
      return res*res;
       else  
         return res*9;

    }
}

int main()
{
 string str;
 cin>>str;
 int n = str.size();
 if(n==1)
 cout<<str<<endl;
  else{
   long long prod = binexp(n-2);
   int a = str[1] - '0';
   int b = str[0] - '0';
   int  max1 = a*(b-1);
   int max2 = (a-1)*b;
   max1 = max(max1,max2);
   prod *= max1;
   cout<<prod<<endl;
}




return 0;
}        