#include <iostream>
using namespace std;
void print( int *arr, int len)
{
    for ( int i =0 ; i < len ; i++){
        cout << arr[i] << " " ;
       
}
 cout << endl;
}


int main(){
    int nums[5] = {0, 1, 0, 3 ,12};
     int store = 0;
         for ( int i = 0 ; i < 5; i++){
             if ( nums[i] != 0){
                 swap(nums[i],nums[store]);
                 store++;
                 print(nums,5);
             }
            
         }
         
    }






