#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i=0,j=n-1;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<n){
        arr[count]=0;
        count++;
    }
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}