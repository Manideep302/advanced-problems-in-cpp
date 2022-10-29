#include<iostream>
using namespace std;
int fun(int *arr,int i,int tar){
    if(i<=0)
    return -1;
    else if(arr[i]==tar)
    return i;
    else
    return fun(arr,i-1,tar);
}
int main(){
    int n,val;
    cin>>n;
    cin>>val;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<fun(arr,n-1,val)<<" is the last occurance of :"<<val;
    return 0;
}