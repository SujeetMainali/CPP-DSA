// pattern structure
/*
123
456
789
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 1;
    while (count < n+1){
        cout<<count;
        if(count% 3==0){
            cout<< endl;
        count++;
        }
        else{
            count++;
        }
    }
    return 0;
}