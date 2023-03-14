#include<iostream>
using namespace std;
int rec(int *arr, int s, int e,int key){
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if (arr[mid] == key ){
        return mid;
    }
   if(arr[mid] < key){
    return  rec(arr,mid+1,e,key);
   }
   else{
   return rec(arr,s,mid-1,key);
   }

 return mid;   
}
int main(){
    int arr[5] = {5,10,15,20,25};
    cout << rec(arr,0,5,11);
}