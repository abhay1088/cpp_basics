 //**************find largest among three numbers**************
#include <iostream>
using namespace std;
int main(){   
int a,b,c;
    cout<<"enter the numbers a,b and c : "<<endl;
    cin>>a>>b>>c;
// using if statement only
    if(a>=b&&a>=c){
        cout<<a<<" is the largest number";
    }
    if(b>=a&&b>=c){
        cout<<b<<" is the largest number";
    }
    if(c>=b&&c>=a){
        cout<<c<<" is the largest number";
      return 0;
    }
