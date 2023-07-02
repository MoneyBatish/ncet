#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int cool=0;
    int verycool=0;
    for(int i=1;i<=n;i++){
        cool=0;
        int x=i;
        while(x!=0){
            if((5&x)==5 && (5|x)==5){
                cool++;
            }
            x=x>>1;
        }
        if(cool>=k){
            cout<<i<<endl;
            verycool++;
        }
    }
    cout<<verycool<<endl;
}