// kth largest factor of n ,when n and k are given as seperated by comma. (N,K).
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
int main(){
    string s,s1,s2;
    cin>>s;
    int sum=0,sum1=0;
    int n[2],a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==','){
            s1=s.substr(0,i);
            s2=s.substr(i+1,s.length()-1);
        }
    }
    for(int i=0;i<s1.length();i++){
        sum+=(s1[s1.length()-1-i]-'0')*pow(10,i);
    }
    for(int i=0;i<s2.length();i++){
        sum1+=(s2[s2.length()-1-i]-'0')*pow(10,i);
    }
    int f=0;
    int count=0;
    for(int i=2;i<sum/2;i++){
        if(sum%i==0){
           count++;
            if(count == sum1){
                f=1;
                cout<<i;
                break;
            }
        }
    }
    if(f==0)
    cout<<"1"<<endl;
    return 0;
}