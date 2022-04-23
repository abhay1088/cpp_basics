#include<bits/stdc++.h>
using namespace std;

int main() {
   //check armstrong number
    int n,sum=0;
    cin>>n;
    int original=n;
    while(n!=0){
        int rem = n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==original){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }

    return 0;
}
