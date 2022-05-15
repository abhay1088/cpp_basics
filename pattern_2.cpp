#include<iostream>
using namespace std;
int main() {  
    int num,i,j;
    cin>>num;
    for(i=1;i<=num;i++){
        for ( j=num;j>=i; j--)
        {
         cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}
//  OUTPUT :-
//  For num =5

* * * * * 
* * * * 
* * *
* *
* 
// **************pattern*********************
#include<iostream>
using namespace std;
int main() { 
      int rows,i,j;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for ( j=1;j<=i; j++)
        {
         cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// OUTPUT  -->
// for rows = 5
1 
1 2 
1 2 3
1 2 3 4
1 2 3 4 5
