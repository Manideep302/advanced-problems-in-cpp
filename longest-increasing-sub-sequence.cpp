#include<iostream>
#include<algorithm>
using namespace std;
int fun(int *arr,int n){
    int lis[n];
    for(int i=0;i<n;i++)
    lis[i]=1;
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[i]>arr[j] && (lis[i]<lis[j]+1))
            lis[i]=lis[j]+1;
        }
    }
    sort(lis,lis+n);
    return lis[n-1];
}
int main(){
    int arr[7]={2,1,3,4,10,8,9};
    cout<<fun(arr,7);
    return 0;
}