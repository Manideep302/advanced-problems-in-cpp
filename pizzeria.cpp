#include<iostream>
using namespace std;
int fun(int arr[],int a,int n){
    int l=0,r=n,mid=-1;
    while(l<r){
        mid=(r+l)/2;
        if(arr[mid]==a)
        return 0;
        else if(arr[mid]>a && arr[mid-1])
        return a-arr[mid-1];
        else if(arr[mid]<a && arr[mid+1]>a)
        return a-arr[mid];
        else
        arr[mid]>a?r=mid-1:l=mid+1;
    }
    return mid;
}
int main(){
    int d;
    cout<<"enter the no of days : ";
    cin>>d;
    cout<<endl;
    int r=0;
    int i=0;
    cout<<"enter the no of pizzerias that he wanted to visited : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the prizes of margharettas "<<endl;
    for(int j=0;j<n;j++){
        cout<<"enter the prize of margharetta in shop "<<j+1<<" : ";
     cin>>arr[j];
    }
    int s=0;
    for(int j=0;j<n;j++){
        s=arr[j]+s;
        arr[j]=s;
    }
    while(i<d){
        cout<<"enter the amount given on day "<<i+1<<" : ";
        int a;
        cin>>a;
        r=r+fun(arr,a,n-1);
        i=i+1;
    }
    cout<<"the total amount returned by him to his mom is : "<<r<<endl;
}