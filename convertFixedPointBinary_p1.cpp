#include <bits/stdc++.h>
using namespace std;
long long fixedPointBinary(int D[],int k);
void nhapMang(int D[],int &k);

int main()
{
	int D[18],k;
	nhapMang(D,k);
	long long kq=fixedPointBinary(D,k);
	cout<<kq;
}

long long fixedPointBinary(int D[],int k)
{
	int l=min(k,17);
	double m=0;
	do{
		m = (131072*D[l-1]+m)/10;
        l--;
	}while(l!=0);
	long long n=(m+1)/2;
	return n;
}

void nhapMang(int D[],int &k)
{
    cout<<"Nhap so luong chu so thap phan sau dau cham: ";
	cin>>k;
	for(int i=0;i<k;i++)
		cin>>D[i];
}

