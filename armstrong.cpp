#include <iostream>
using namespace std;

int main(){    
int num , originalnum, remainder,sum=0;
    cout<<"enter a number"<<endl;
    cin>>num;
    originalnum=num;
    while(originalnum!=0){
        remainder=originalnum%10;
        sum=sum+remainder*remainder*remainder;
        originalnum/=10;
    }
    if(sum==num){
        cout<<num<<" is a armstrong number.";
    }
else{
        cout<<num<<" is not a armstrong number.";
   return 0;

}
