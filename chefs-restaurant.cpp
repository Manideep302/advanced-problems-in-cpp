#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int nex(vector<pair<int,int>> vec,int a,int s){
    int l=0,r=s,mid=0;
    if(a>(vec[s-1].second))
    return -1;
    if(a<vec[0].first)
    return (vec[0].first-a);
    while(l<=r){
        mid=(l+r)/2;
        if(vec[mid].first<=a && vec[mid].second>a)
        return 0;
        else if(vec[mid].first>a &&vec[mid-1].second<a)
        return (vec[mid].first-a);
        else{
            if(vec[mid].first>a)
                r=mid-1;
            else
            l=mid+1;
        }
    }
}
void fun(vector<pair<int,int>> vec,int n,int *p,int s){
    cout<<"the wait time for the given members are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<nex(vec,p[i],s)<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int p[m];
    int start[n],end[n];
    for(int i=0;i<n;i++){
        cin>>start[i];
        cin>>end[i];
    }
    for(int i=0;i<m;i++)
    cin>>p[i];
    sort(start,start+n);
    sort(end,end+n);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    v.push_back(make_pair(start[i],end[i]));
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first;
    //     cout<<v[i].second;
    //     cout<<endl;
    // }
    fun(v,m,p,n);
   return 0;
}