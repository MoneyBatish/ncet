#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2;
    cin>>s2;
    char arr[27]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int sum1=1;
    int sum2=1;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<27;j++){
            if(s[i]==arr[j]){
                sum1*=j;
            }
        }
    }
    for(int i=0;i<s2.length();i++){
        for(int j=1;j<27;j++){
            if(s2[i]==arr[j]){
                sum2*=j;
            }
        }
    }
    if(sum1%47==sum2%47){
        cout<<"CHOSEN"<<endl;
    }
    else{
        cout<<"NOT CHOSEN"<<endl;
    }
}