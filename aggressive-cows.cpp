#include<iostream>
#include<algorithm>
using namespace std;
int fun(int *arr,int n,int c,int max){
    int l=0,r=max,mid=0,res=-1;
    while(l<=r){
        mid=(l+r)/2;
        int tc=c-1;
        int a=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[a]>=mid){
                tc--;
                a=i;
            }
            if(tc==0){
                res=mid;
                l=mid+1;
                break;
            }
        }
        if(tc!=0)
        r=mid-1;
    }
    return res;
}
int main(){
    int n,c;
    cout<<"enter the no of cows available : ";
    cin>>c;
    cout<<"enter the no of sheads available : ";
    cin>>n;
    int arr[n];
    cout<<"enter the positions of sheads : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int max=*max_element(arr,arr+n);
   cout<< fun(arr,n,c,max)<<" is the max possible distance "; 
    return 0;
}