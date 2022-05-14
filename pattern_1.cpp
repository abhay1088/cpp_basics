#include<iostream>
using namespace std;

int main() { 
int num, i,j;                                    
    cin>>num;
    for(i=1;i<=num;i++){
        for ( j=1;j<=num; j++)
        {
         cout<<"* ";
        }
        cout<<endl;
    }
  return 0;
}
//  OUTPUT : 
//  For num =5

* * * * *   
* * * * * 
* * * * * 
* * * * * 
* * * * * 
// ************************* pattern question 2 ****************************    
#include<iostream>
using namespace std;
int main() {  
    int num,i,j;
    cin>>num;
    for(i=1;i<=num;i++){
        for ( j=1;j<=i; j++)
        {
         cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}
//  OUTPUT :-
//  For num =5

* 
* *
* * * 
* * * * 
* * * * *  
