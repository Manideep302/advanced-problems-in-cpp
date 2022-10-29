#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int es=0,os=0;
    for(int i=0;i<n-1;i++){
       if(i%2==0)
       es+=arr[i];
       else
       os=os+arr[i];
    }
    cout<<max(es,os);
    return 0;
}