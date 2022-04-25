// ************ to check wheteher a number is palindrome or not ***************
    #include <iostream>
    using namespace std;

    int main(){
    int num,reversedno=0,remainder;
    cout<<" enter any number of more than any two digits : ";
    cin>>num;
    int n=num;

     while(num!=0){
         remainder=num%10;
         reversedno=reversedno*10+remainder;
         num=num/10;
     }
     cout<<"reversed number = "<<reversedno<<endl;
     if(n==reversedno){
         cout<<"palindrome number";
     }
     else{
         cout<<" its not a palindrome no.";
       return 0;

     }
