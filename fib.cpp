#include<bits/stdc++.h>
using namespace std;

long long fib(long long n){
    if (n<=2) return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    cout<<fib(20);
}