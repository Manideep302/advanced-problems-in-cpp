#include<iostream>
#include<string>
using namespace std;
void bt(int l,string s,int r){
    if(l==r)
    cout<<s<<" ";
    else{
        for(int i=l;i<=r;i++){
        swap(s[i],s[l]);
        bt(l+1,s,r);
        swap(s[i],s[l]);
        }
    }
}
int main(){
    string a="abc";
    bt(0,a,2);
    return 0;
}