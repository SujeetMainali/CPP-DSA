#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    bool isPrime = false;
    for(int i = 2; i < n; i++){
            // cout << i%n;
        if(n%i == 0){
            isPrime = true;
            break;
        }

        
    }
    if(isPrime == true){
            cout<< "Not a prime";
        }else{
            cout<< "Prime number";
        }
}