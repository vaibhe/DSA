#include<iostream>
using namespace std;

int linear_search(int *arr,int len, int key){
     for ( int i =0 ; i < len; i++){
        if ( arr[i] == key){
           return i;
        }  
    }
    return -1;
}

int main(){
    int arr[5] = {20,13,56,21,11};
    int key;
    cin >> key;
    cout<<linear_search(arr,5,key);

   
}