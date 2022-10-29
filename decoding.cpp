#include<iostream>
#include<string.h>
using namespace std;
// without using dynamic programming
int fun(int *arr,int n){
    if(arr[0]==0)
    return 0;
    if(n==1||n==0)
    return 1;
    int count =0;
    if(arr[n-1]!=0)
    count=fun(arr,n-1);
    if(arr[n-2]==1 || (arr[n-2]==2 && arr[n-1]<7)){
        count+=fun(arr,n-2);
    }
    return count;
}
// using dynamic programming
int fun2(int *arr,int n){
    if(arr[0]==0)
    return 0;
    int count[n+1];
    count[0]=1;
    count[1]=1;
    for(int i=2;i<=n;i++){
        count[i]=0;
        if(arr[i-1]>0)
        count[i]=count[i-1];
        if(arr[i-2]==1 || (arr[i-2]==2 && arr[i-1]<7))
        count[i]+=count[i-2];
    }
    return count[n];
}
int main(){
    int arr[]={1,2,3,4};
    cout<<fun(arr,4)<<endl;
    cout<<fun2(arr,4)<<" using dp ";
    return 0;
}