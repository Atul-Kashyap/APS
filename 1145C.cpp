#include<bits/stdc++.h>
using namespace std;
unsigned int ReverseBits(unsigned int input)
{
    unsigned int output = input;
    for (int i = sizeof(input) * 8-1; i; --i)
    {
        output <<= 1;
        input  >>= 1;
        output |=  input & 1;
    }
    return output;
}
int main()
{
 unsigned int a;
 cin>>a;
 a= ReverseBits(a);
 a-=1;
 a=ReverseBits(a);
 cout<<a<<endl;


 return 0;
}