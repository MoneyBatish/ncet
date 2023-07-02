#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    string a1="";
    for(int i=0;i<a.length();i++){
        char ch=a[i];
        if(ch!='0'){
            a1+=ch;
        }
    }
    string b1="";
    for(int i=0;i<b.length();i++){
        char ch=b[i];
        if(ch!='0'){
            b1+=ch;
        }
    }
    string c1="";
    for(int i=0;i<c.length();i++){
        char ch=c[i];
        if(ch!='0'){
            c1+=ch;
        }
    }
    string d1="";
    for(int i=0;i<d.length();i++){
        char ch=d[i];
        if(ch!='0'){
            d1+=ch;
        }
    }
    int A=stoi(a1);
    int B=stoi(b1);
    int C=stoi(c1);
    int D=stoi(d1);

    if(A+B+C==D){
        cout<<"Valid";
    }else{
        cout<<"No Valid";
    }
}