#include<iostream>
using namespace std;
int main() {
    int num ;
    cout << " ENter the number " << endl;
    cin >> num ;
    long long fact = 1;
    for ( int i = 1 ; i <= num; i++){
        fact *= i;
    }
    cout << " The Factorial of " << num << " is " << fact << endl;
    
}