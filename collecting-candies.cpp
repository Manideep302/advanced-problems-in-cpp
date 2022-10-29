#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
            if(i>0)
            v.push_back(sum);
        }
        sum=0;
        for(auto x:v){
            sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}