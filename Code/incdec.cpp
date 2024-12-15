#include<iostream>
using namespace std;
int main(){
    int x =5;
    
    // int y = ++x;
    // int z = x +1;
    // cout<<x<<y << z;

    int z = x++;
    int y = x + 1;
    cout<<x<<y<<z;
}