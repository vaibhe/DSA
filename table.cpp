#include<iostream>
using namespace std;
int main() {
    int input;
    cin >> input;
    for ( int i = 0 ; i < 11; i++){
        cout << input << " * " << i << " = " << (input*i) << endl;
    }
    return 0;
}