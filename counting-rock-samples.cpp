#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>m;
    vector<int>v;
    int s,r;
    cout<<" enter the no of rock samples and no of research labs available :";
    cin>>s>>r;
    int a;
    for(int i=0;i<s;i++){
        cin>>a;
        m[a]++;
    }
    for(int i=0;i<r;i++){
        int min,max,ans=0;
        cin>>min>>max;
        for(int j=min;j<max;j++){
            if(m.count(j)){
                ans++;
            }
        }
        v.push_back(ans);
    }
    for(auto x:v)
    cout<<x<<" ";
    return 0;
}