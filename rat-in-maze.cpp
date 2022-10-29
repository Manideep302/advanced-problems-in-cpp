#include<iostream>
using namespace std;
void print(int arr[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
}
bool valid(int arr[][4],int r,int col){
    if(arr[r][col]>=1)
    return true;
    return false;
}
bool solve(int arr[][4],int r,int col){
    if(r==3 && col==3){
    arr[3][3]=1;   
    return true;
    }
    if(valid(arr,r,col)){
        if(arr[r][col]==1)
        return false;
        else
        arr[r][col]=1;
        if(solve(arr,r+1,col))
        return true;
        if(solve(arr,r,col+1))
        return true;
        if(solve(arr,r+1,col+1))
        return true;
        if(solve(arr,r-1,col+1))
        return true;
        if(solve(arr,r+1,col-1))
        return true;
        if(solve(arr,r-1,col-1))
        return true;
        if(solve(arr,r-1,col))
        return true;
        if(solve(arr,r,col-1))
        return true;
        arr[r][col]=0;
        return false;
    }
    return false;
}
int main(){
    int arr[][4]={{3,0,5,8},{3,2,9,4},{0,0,0,3},{0,0,0,8}};
    if(solve(arr,0,0)){
        print(arr);
    }
    else
    cout<<" the rat cannot reach the destination ";
    return 0;
}