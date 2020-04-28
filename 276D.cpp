#include<bits/stdc++.h>
using namespace std;
 
#define ABS(a) ((a>0)?a:-(a))
#define MIN(a,b) ((a<b)?(a):(b))
#define MAX(a,b) ((a<b)?(b):(a))
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define PI 3.14159265358979
#define MEMS(a,b) memset(a,b,sizeof(a))
#define LL long long
#define U unsigned
 
LL solveStupid(LL l, LL r)
{
        LL res=0;
        for (LL i=l; i<=r; ++i)
                for (LL j=i; j<=r; ++j)
                        res=max(res,i^j);
        return res;
}
string s1,s2;
LL dp[70][2][2][2][2];
 
LL rec(int p, int fl1, int fl2, int fr1, int fr2)
{
        if (p==s1.size())
                return 0;
        if (dp[p][fl1][fl2][fr1][fr2]!=-1)
                return dp[p][fl1][fl2][fr1][fr2];
        int min1=0,max1=1;
        if ((fl1==0) && (s1[p]=='1'))
                min1=1;
        if ((fl2==0) && (s2[p]=='0'))
                max1=0;
        int min2=0,max2=1;
        if ((fr1==0) && (s1[p]=='1'))
                min2=1;
        if ((fr2==0) && (s2[p]=='0'))
                max2=0;
        LL res=0;
        FOR(i,min1,max1+1)
                FOR(j,min2,max2+1)
                {
                        int v=(i^j);
                        LL toadd=0;
                        if (v==1)
                        {
                                int step=s1.size()-p-1;
                                toadd=(1ll<<step);
                        }
                        int nfl1=fl1,nfl2=fl2,nfr1=fr1,nfr2=fr2;
                        if (i>s1[p]-'0')
                                nfl1=1;
                        if (i<s2[p]-'0')
                                nfl2=1;
                        if (j>s1[p]-'0')
                                nfr1=1;
                        if (j<s2[p]-'0')
                                nfr2=1;
                        res=max(res,toadd+rec(p+1,nfl1,nfl2,nfr1,nfr2));
                }
        return dp[p][fl1][fl2][fr1][fr2]=res;
}
string getbin(LL num)
{
        string res="";
        while (num)
        {
                res+=((num&1)+'0');
                num/=2;
        }
        reverse(res.begin(),res.end());
        return res;
}
LL solveSmart(LL l, LL r)
{
        s1=getbin(l);
        s2=getbin(r);
        while (s1.size()<s2.size())
                s1="0"+s1;
        MEMS(dp,-1);
        LL res=rec(0,0,0,0,0);
        return res;
}
int main()
{
#ifdef Fcdkbear
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double beg=clock();
#endif
   LL l,r;
   cin>>l>>r;
   cout<<solveSmart(l,r)<<endl;
 
#ifdef Fcdkbear
    double end=clock();
    fprintf(stderr,"*** Total time = %.3lf ***\n",(end-beg)/CLOCKS_PER_SEC);
#endif
    return 0;
}


