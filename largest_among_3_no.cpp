 //**************find largest among three numbers**************
#include <iostream>
using namespace std;
int main(){   
int a,b,c;
    cout<<"enter the numbers a,b and c : "<<endl;
    cin>>a>>b>>c;
// ****************using if statement only
    if(a>=b&&a>=c){
        cout<<a<<" is the largest number";
    }
    if(b>=a&&b>=c){
        cout<<b<<" is the largest number";
    }
    if(c>=b&&c>=a){
        cout<<c<<" is the largest number";
     
// ************using  nested if else statement
    if(a>b){
        if(a>c){
            cout<<"a is the largest number";
        }
        else{
            cout<<" c is the largest number";
        }
    }
    else{
        if(b>c){
        cout<<" b is the largest number";
    }
    else{
        cout<<" c is the largest number";
    }
    }
//****************using if else if else
    if(a>b&&a>c){
        cout<<"a is the largest number";
    }
    else if (b>c&&b>a){
cout<<"b is the largest number";
    }
    else{
        cout<<"c is the largest number";
    }
      return 0;
    }
