// check whether the given number is prime number or not
#include <iostream>
using namespace std;

int main()
{ 
int num,flag=0;
    cin>>num;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
         flag=1;
         break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
      return 0;
    }
