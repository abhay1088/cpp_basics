 // ************ program to swap two numbers *******************
 // 1. using temp variable
    int a=4,b=3,temp;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;
    cout<<"after switching"<<endl;
    temp=a;
    a=b;
    b=temp;

    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;

// 2. without using temp variable
    int a=4,b=3;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;
    cout<<"after switching"<<endl;
    swap using additon and subtraction
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;

// 3. swap using multiplication and division also
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;

// 4.swap(a,b);    using inbuilt function of algorithm header file
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;
