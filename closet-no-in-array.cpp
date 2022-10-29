#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// constrains as n<10^8 will work with the below method o(n) but n is above 10^8 ,o(1) fails.
int fun(vector<int>v,int t){
    for(int i=0;i<v.size();i++){
        if(v[i]>=t){
            if(i==0)
            return v[i];
            int a=v[i]-t;
            int b=t-v[i-1];
            return a<b?v[i]:(v[i-1]);
        }
    }
}
// it works for any constrains of n
int method2(vector<int>v,int n,int t){
    if(t<v[0])
    return v[0];
    if(t>v[n])
    return v[n];
    int i=0,j=n,mid=0;
    while(i<j){
        mid=(i+j)/2;
        if(v[mid]==t)
        return v[mid];
        if(v[mid]<t){
            if(v[mid+1]>t){
                return (t-v[mid])<(v[mid+1]-t)?v[mid]:v[mid+1];
            }
            i=mid+1;
        }
        else{
            if(v[mid-1]<t){
                return (v[mid]-t)<(t-v[mid-1])?v[mid]:v[mid-1];
            }
            j=mid-1;
        }
    }
}
int main(){
    int n;cin>>n;
    int tar;
    cin>>tar;
    vector<int>v;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<fun(v,tar)<<" using 1st method "<<endl;
    cout<<"using 2nd method "<<method2(v,n-1,tar);
    return 0;
}