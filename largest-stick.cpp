#include<iostream>
#include<algorithm>
using namespace std;
int fun(int *arr,int n,int max,int b){
    int l=0,r=max,mid=0,res=-1;
    while(l<r){
        mid=(l+r)/2;
        int t=0;
        for(int i=0;i<n;i++){
            t+=arr[i]/mid;
        }
        if(t>=b){
            res=mid;
            l=mid+1;
        }
        else
        r=mid-1;
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the no of samples available : ";
    cin>>n;
    int b;
    cout<<"enter the no of sticks to be there in the bundle : ";
    cin>>b;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
   int max=*max_element(arr,arr+n);
    cout<<fun(arr,n,max,b)<<" is the max height of equal sticks in the bundle ";
    return 0;
}