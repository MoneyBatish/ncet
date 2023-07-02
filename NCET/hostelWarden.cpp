#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
    return true;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>primes;
    vector<int>composites;
    vector<int>others;

    for(char ch:s){
        int number=ch;
        if(isPrime(number)){
            primes.push_back(ch);
        }
        else if(isalpha(ch)){
            composites.push_back(ch);
        }
        else{
            others.push_back(ch);
        }
    }
    sort(primes.begin(),primes.end());
    sort(composites.rbegin(),composites.rend());
    vector<char> result;
    result.insert(result.end(), primes.begin(), primes.end());
    result.insert(result.end(), composites.begin(), composites.end());
    result.insert(result.end(), others.begin(), others.end());
    
    for (char student : result) {
        cout << student;
    }
}