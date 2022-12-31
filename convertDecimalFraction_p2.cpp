#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a,int b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}
void decimalFraction()
{
  int n; cin>>n;
  int j=0;
  int s = 10*n;
  int t = 10;
  int d[100];
  while (s>=t)
  {
     if (t>65536) s = s + (65536/2);
     j++; d[j] = s/65536;
     s = 10*(s%65536); t*=10;
  }
  int k = j;
  for (int i=1;i<=k;i++) cout<<d[i]<<" ";
}

int32_t main()
{
   int t=1; //cin>>t;
   while (t--)
   {
      decimalFraction();
   }
}
