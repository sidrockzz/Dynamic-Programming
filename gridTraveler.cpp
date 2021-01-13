#include<bits/stdc++.h>
using namespace std;

int gridTraveler(int m, int n){
    if (m==1 && n==1) return 1;
    if (m==0 || n==0) return 0;
    return gridTraveler(m-1,n)+gridTraveler(m,n-1);
}

int main(){
    cout<<gridTraveler(1,1);
    cout<<gridTraveler(2,3);
    cout<<gridTraveler(3,2);
    //cout<<gridTraveler(18,18);
}