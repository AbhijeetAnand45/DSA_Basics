#include<bits/stdc++.h>
using namespace std;

// 1st Approach : Reminder-divident Method Time : O(log(n)) space : O(1)
bool isPowerOfTwo(int n) {
    if(n == 0) {
        return false;
    }
    while(n%2 == 0) {
        n = n/2;
    }
    return n == 1;
}

// 2nd Approach : Using Recursion Remainder-devident , Time : O(logn) space : O(logn) due to recursion stack
bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
}


// 3rd Approach : Bit Manipulation Time : O(1) space : O(1)
// Intution
// 3->0000 0011
// 4->0000 0100
// 5->0000 0101
// 6->0000 0110
// 7->0000 0111
// 8->0000 1000

bool isPowerOfTwo(int n) {
    if(n <= 0){
        return false;
    }
    return (n & (n-1) == 0);
}

// 4th Approach : C++ STL // As power of two has only one 1 bit
bool isPowerOfTwo(int n) {
        if(n<0) return false;
        
        int bits = __builtin_popcount(n);
        
        return bits == 1;
}


// 5th Approach : Ceil and Floor Method

bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return ceil(log2(n)) == floor(log2(n));
}


int main() {

    int n;
    cin>>n;
    cout<<isPowerOfTwo(n);
    return 0;
}