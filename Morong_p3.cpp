#include <bits/stdc++.h>
using namespace std;

void Extension(){
    long long n,m;
    cin >> n >>m;
    int j=0;
    long long s= 10*n+4;
    long long t =10;
    long long d[100];
    while (s>= t){
        if (t>m){
            s = s+1 +(m/2)-(t/2);           
        }
        j++;
        d[j] = s/m;
        s = 10*(s%m)+9;
        t*=10;
    }
    long long k=j;
    
    for (int i=1;i<=k;i++){
        cout <<d[i] <<" ";
    }

}

int main(){
    Extension();
    return 0;
}