// the operators workin gon bit level rather than on numeric level 
/*
example: a = 2, b = 3
a --> 10 in binary
b --> 11 in binary
a&b --> 0-1 = 0, 1-1 = 1, hence 10-->2
*/

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 11;
     cout <<"a&b " << (a&b) <<endl;
     cout << "a|b " << (a|b)<<endl;
     cout <<"~a " << (~a)<<endl;
     cout <<"a^b " << (a^b)<<endl;

     return 0;
}