#include<iostream>
using namespace std;
void fun(int l,int arr[],int r){
    if(l==r){
        for(int i=0;i<=r;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    else{
        for(int i=l;i<=r;i++){
            swap(arr[i],arr[l]);
            fun(l+1,arr,r);
            swap(arr[i],arr[l]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(0,arr,n-1);
    return 0;
}