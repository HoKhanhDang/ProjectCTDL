
// UNG DUNG CHUYEN MOT SO THAP PHAN SANG NHI PHAN BANG THUAT TOAN TRONG BAI BAO

#include <bits/stdc++.h>
using namespace std;
string Dec2Binng(int decimalNumber) // chuyen  phan nguyen
{
    string binaryNumber = "";
    int p = 0;
    while (decimalNumber>0)
    {
        binaryNumber = char(decimalNumber%2+'0') + binaryNumber;
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
string Dec2Bintp(int decimalNumber) // chuyen phan thap phan
{
    string binaryNumber = "";
    int p = 0;
    while (p<16)
    {
        binaryNumber = char(decimalNumber%2+'0') + binaryNumber;
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
void solve(string s)
{
    
    bool saucham = false;
    int d[100]; // mang chua cac chu so thap phan
    int dem=0;
    int nguyen;
    string tm = "";
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='.') {saucham=true; continue;}
        if (saucham==true)
        {
            dem++; //cout<<dem<<endl;
            d[dem] = s[i]-'0';
            continue;
        }
        tm = tm+s[i];
    }
    nguyen = stoi(tm);

    //thuat toan cua tac gia
    int m=0;
    int n;
    int l = min(dem,17);
    while (l>0)
    {
        m = (131072*d[l]+m)/10;
        l--;
    }
    n = (m+1)/2;
    
    string tp = Dec2Bintp(n);
    string ng = Dec2Binng(nguyen);
    string kq = ng+"."+tp;
    cout<<"Chuyen sang nhi phan: ";
    cout<<endl;
    cout<<kq<<endl;

}
int main()
{
    cout<<"Nhap mot so thap phan bat ki: ";
    string s; cin>>s;
    solve(s);
}