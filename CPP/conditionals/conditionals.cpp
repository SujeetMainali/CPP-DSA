#include<iostream>
using namespace std;
int main(){
    int n;
    bool isTrue = true;
    char repeat;
    while(isTrue){
    cout << "Hello, Please enter a number";
    cin >> n;
    cout << "You entered: " << n << endl;
    if(n > 0){
        cout << n << " is positive" << endl;
    }else if (n < 0){
        cout << n << " is negative" << endl;
    }else{
        cout << n << " is zero" << endl;
    }
    cout << "more ?";
     cin >> repeat;
        if(repeat != 'y'){
            isTrue = false;
        }
    }
    

}