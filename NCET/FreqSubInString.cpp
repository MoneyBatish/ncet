#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int n=s1.length();
    int m=s2.length();
    int count=0;
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(s1[j+i]!=s2[j]){
                break;
            }
        }
        if(j==m){
            count++;
        }
    }
    cout<<count<<endl;
}