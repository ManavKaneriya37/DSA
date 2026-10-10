#include <bits/stdc++.h>

using namespace std;

int sum_digits(int n) {

    if(n == 0){
        return 0;
    }
 
    return n % 10 + sum_digits(n / 10);
}

int main() {

    int n;

    cout<<"Enter value of n: ";
    cin>>n;

    cout<<sum_digits(n);

    return 0;
}